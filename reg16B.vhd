----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:11:03 02/27/2018 
-- Design Name: 
-- Module Name:    reg16B - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity reg16B is
    Port ( clk : in  STD_LOGIC;
           d : in  STD_LOGIC_VECTOR (127 downto 0);
           q : out  STD_LOGIC_VECTOR (127 downto 0));
end reg16B;

architecture Behavioral of reg16B is

begin
	
	process (clk)
	begin
		if rising_edge(clk) then
			q <= d;
		end if;
	end process;


end Behavioral;

