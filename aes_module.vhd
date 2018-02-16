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

	component key_schedule is
    port ( clr : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           original_key : in  STD_LOGIC_VECTOR (127 downto 0);
           round_number : in  STD_LOGIC_VECTOR (3 downto 0);
			  send_key  : in STD_LOGIC;
           round_key : out  STD_LOGIC_VECTOR (127 downto 0));
	end component;

	-- the signal to keep track of the current round number
	signal round_number : integer range 0 to 10 := 0;
	
	-- the bit to persist state 0 for a full cycle
	signal en : bit := '0';
	signal keys_filled   : STD_LOGIC := '0';  -- the bit to indicate that all keys have been filled
	
	-- signal to get from other components
	signal round_key : STD_LOGIC_VECTOR(127 downto 0); 
begin


-- map the ports of other components
key_scheduler : key_schedule port map (clr, clk, key, STD_LOGIC_VECTOR(to_unsigned(round_number, 4)), keys_filled, round_key);

state_machine_process:
process(clr, clk)
begin
	if clr = '1' then
		round_number <= 0;
		keys_filled <= '0';
	elsif rising_edge(clk) then
		if en = '0' then
			en <= '1';
		elsif keys_filled = '0' then
			if round_number = 10 then
				keys_filled <= '1';
				if enc = '1' then
					round_number <= 0;
				else
					round_number <= 10;
				end if;
			else
				round_number <= round_number + 1;
			end if;
		else
			if enc = '1' then
				if round_number = 10 then
					round_number <= 0;
				else
					round_number <= round_number + 1;
				end if;
			else
				if round_number = 0 then
					round_number <= 10;
				else
					round_number <= round_number - 1;
				end if;
			end if;
		end if;
	end if;
end process;

q <= round_key;
end Behavioral;

