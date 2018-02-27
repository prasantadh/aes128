----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:07:28 02/25/2018 
-- Design Name: 
-- Module Name:    ram - Behavioral 
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

entity ram is
    Port ( clk : in  STD_LOGIC;
           we : in  STD_LOGIC;
           address : in  STD_LOGIC_VECTOR (3 downto 0);
           datain : in  STD_LOGIC_VECTOR (127 downto 0);
           dataout : out  STD_LOGIC_VECTOR (127 downto 0));
end ram;

architecture Behavioral of ram is

	type ram_t is array (0 to (2**address'length)-1) of STD_LOGIC_VECTOR(datain'range);
	signal ram: ram_t := (others => x"00000000000000000000000000000000");
begin
	
process(clk) 
begin
	if rising_edge(clk) then
		if we = '1' then
			ram(to_integer(unsigned(address))) <= datain;
		end if;
	end if;
end process;

dataout <= ram(to_integer(unsigned(address)));

end Behavioral;

