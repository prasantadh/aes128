----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:18:50 02/16/2018 
-- Design Name: 
-- Module Name:    aes_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity aes_module is
    Port ( clr : in  STD_LOGIC;
			  clk : in  STD_LOGIC;
           enc : in  STD_LOGIC;
           key : in  STD_LOGIC_VECTOR (127 downto 0);
           d   : in  STD_LOGIC_VECTOR (127 downto 0);
           q   : out STD_LOGIC_VECTOR (127 downto 0));
end aes_module;

architecture Behavioral of aes_module is

	component ram is
    port ( clk : in  STD_LOGIC;
           we : in  STD_LOGIC;
           address : in  STD_LOGIC_VECTOR (3 downto 0);
           datain : in  STD_LOGIC_VECTOR (127 downto 0);
           dataout : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;

	component key_schedule is
    port ( current_key : in  STD_LOGIC_VECTOR (127 downto 0);
           round_number : in  STD_LOGIC_VECTOR (3 downto 0);
           next_key : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;

	component encrypt_module is
    port ( clr : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           round_number : in  STD_LOGIC_VECTOR (3 downto 0);
           round_key : in  STD_LOGIC_VECTOR (127 downto 0);
           plaintext : in  STD_LOGIC_VECTOR (127 downto 0);
           ciphertext : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;

	component decrypt_module is
    port ( clr : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           round_number : in  STD_LOGIC_VECTOR (3 downto 0);
           round_key : in  STD_LOGIC_VECTOR (127 downto 0);
           ciphertext : in  STD_LOGIC_VECTOR (127 downto 0);
           plaintext : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;
	
	component reg16B is
    port ( clk : in  STD_LOGIC;
           d : in  STD_LOGIC_VECTOR (127 downto 0);
           q : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;
	
	-- the signal to keep track of the current round number
	signal round_number : STD_LOGIC_VECTOR(3 downto 0) := x"0";
	
	-- the bit to persist state 0 for a full cycle
	signal en : STD_LOGIC := '0';
	signal keys_filled   : STD_LOGIC := '0';  -- the bit to indicate that all keys have been filled
	
	-- signal to get from other components
	signal round_key : STD_LOGIC_VECTOR(127 downto 0); 
	signal ciphertext: STD_LOGIC_VECTOR(127 downto 0);
	signal plaintext : STD_LOGIC_VECTOR(127 downto 0);
	signal key_schedule_output : STD_LOGIC_VECTOR(127 downto 0);
	signal ram_input : STD_LOGIC_VECTOR(127 downto 0);
	
	signal key_hold_input : STD_LOGIC_VECTOR(127 downto 0);
	signal key_hold_output: STD_LOGIC_VECTOR(127 downto 0);
begin


-- map the ports of other components
key_scheduler 	: key_schedule port map (key_hold_output, round_number, key_schedule_output);

key_hold_input <= key when (round_number = x"0" and en='0') else key_schedule_output;
key_hold : reg16B port map(clk, key_hold_input, key_hold_output);
key_storage	: ram port map(clk, not keys_filled, round_number, key_hold_output, round_key);

encrypter : encrypt_module port map(not keys_filled, clk, round_number, round_key, d,ciphertext);
decrypter : decrypt_module port map(not keys_filled, clk, round_number, round_key, d,plaintext);

state_machine_process:
process(clr, clk)
begin
	if clr = '1' then
		round_number <= x"0";
		keys_filled <= '0';
	elsif rising_edge(clk) then
		if en = '0' then
			en <= '1';
		elsif keys_filled = '0' then
			if round_number = x"A" then
				keys_filled <= '1';
				if enc = '1' then
					round_number <= x"0";
				else
					round_number <= x"A";
				end if;
			else
				round_number <= std_logic_vector(unsigned(round_number) + 1);
			end if;
		else
			if enc = '1' then
				if round_number = x"A" then
					round_number <= x"0";
				else
					round_number <= std_logic_vector(unsigned(round_number) + 1);
				end if;
			else
				if round_number = x"0" then
					round_number <= x"A";
				else
					round_number <= std_logic_vector(unsigned(round_number) - 1);
				end if;
			end if;
		end if;
	end if;
end process;

q <= ciphertext when (enc='1') else plaintext;
end Behavioral;

