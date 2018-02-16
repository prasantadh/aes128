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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity aes_module is
    Port ( clr : in  STD_LOGIC;
           enc : in  STD_LOGIC;
           key : in  STD_LOGIC_VECTOR (128 downto 0);
           d : in  STD_LOGIC_VECTOR (128 downto 0);
           q : out  STD_LOGIC_VECTOR (0 downto 0));
end aes_module;

architecture Behavioral of aes_module is

begin
				
end Behavioral;

