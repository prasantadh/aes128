----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:25:45 02/16/2018 
-- Design Name: 
-- Module Name:    key_schedule - Behavioral 
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

entity key_schedule is
    Port ( current_key : in  STD_LOGIC_VECTOR (127 downto 0);
           round_number : in  STD_LOGIC_VECTOR (3 downto 0);
           next_key : out  STD_LOGIC_VECTOR (127 downto 0));
end key_schedule;

architecture Behavioral of key_schedule is

	-- set up an array of rcon values
	type rcon_t is array (0 to 10) of STD_LOGIC_VECTOR(7 downto 0);
	constant rcon : rcon_t := (X"01", X"02", X"04", X"08", X"10", X"20", X"40", X"80", X"1B", X"36", X"8D");
	
	
	-- set up the sbox values
	type sbox_t is array (0 to 255) of STD_LOGIC_VECTOR(7 downto 0);
	constant sbox : sbox_t := 
	(
		x"63", x"7C", x"77", x"7B", x"F2", x"6B", x"6F", x"C5", x"30", x"01", x"67", x"2B", x"FE", x"D7", x"AB", x"76",
		x"CA", x"82", x"C9", x"7D", x"FA", x"59", x"47", x"F0", x"AD", x"D4", x"A2", x"AF", x"9C", x"A4", x"72", x"C0",
		x"B7", x"FD", x"93", x"26", x"36", x"3F", x"F7", x"CC", x"34", x"A5", x"E5", x"F1", x"71", x"D8", x"31", x"15",
		x"04", x"C7", x"23", x"C3", x"18", x"96", x"05", x"9A", x"07", x"12", x"80", x"E2", x"EB", x"27", x"B2", x"75",
		x"09", x"83", x"2C", x"1A", x"1B", x"6E", x"5A", x"A0", x"52", x"3B", x"D6", x"B3", x"29", x"E3", x"2F", x"84",
		x"53", x"D1", x"00", x"ED", x"20", x"FC", x"B1", x"5B", x"6A", x"CB", x"BE", x"39", x"4A", x"4C", x"58", x"CF",
		x"D0", x"EF", x"AA", x"FB", x"43", x"4D", x"33", x"85", x"45", x"F9", x"02", x"7F", x"50", x"3C", x"9F", x"A8",
		x"51", x"A3", x"40", x"8F", x"92", x"9D", x"38", x"F5", x"BC", x"B6", x"DA", x"21", x"10", x"FF", x"F3", x"D2",
		x"CD", x"0C", x"13", x"EC", x"5F", x"97", x"44", x"17", x"C4", x"A7", x"7E", x"3D", x"64", x"5D", x"19", x"73",
		x"60", x"81", x"4F", x"DC", x"22", x"2A", x"90", x"88", x"46", x"EE", x"B8", x"14", x"DE", x"5E", x"0B", x"DB",
		x"E0", x"32", x"3A", x"0A", x"49", x"06", x"24", x"5C", x"C2", x"D3", x"AC", x"62", x"91", x"95", x"E4", x"79",
		x"E7", x"C8", x"37", x"6D", x"8D", x"D5", x"4E", x"A9", x"6C", x"56", x"F4", x"EA", x"65", x"7A", x"AE", x"08",
		x"BA", x"78", x"25", x"2E", x"1C", x"A6", x"B4", x"C6", x"E8", x"DD", x"74", x"1F", x"4B", x"BD", x"8B", x"8A",
		x"70", x"3E", x"B5", x"66", x"48", x"03", x"F6", x"0E", x"61", x"35", x"57", x"B9", x"86", x"C1", x"1D", x"9E",
		x"E1", x"F8", x"98", x"11", x"69", x"D9", x"8E", x"94", x"9B", x"1E", x"87", x"E9", x"CE", x"55", x"28", x"DF",
		x"8C", x"A1", x"89", x"0D", x"BF", x"E6", x"42", x"68", x"41", x"99", x"2D", x"0F", x"B0", x"54", x"BB", x"16"
	);	
	
	-- set up a storage for keys
	type keys_t is array (0 to 10) of STD_LOGIC_VECTOR(127 downto 0);
	signal keys : keys_t;
	
	-- a function to calculate the g() function in key schedule
	impure function g(current_key_3 : in STD_LOGIC_VECTOR(31 downto 0)) 
		return STD_LOGIC_VECTOR is
		variable g_current_key_3 : STD_LOGIC_VECTOR(31 downto 0);
	begin
		g_current_key_3:=(sbox(to_integer(unsigned(current_key_3(23 downto 16)))) xor rcon(to_integer(unsigned(round_number)))) &
								sbox(to_integer(unsigned(current_key_3(15 downto  8))))                                               &
								sbox(to_integer(unsigned(current_key_3( 7 downto  0))))                                               &
								sbox(to_integer(unsigned(current_key_3(31 downto 24))));
		return STD_LOGIC_VECTOR(g_current_key_3);
	end function;
	
	-- set up signals for processing words
	signal next_key_0, next_key_1, next_key_2, next_key_3 : STD_LOGIC_VECTOR (31 downto 0) := x"00000000";
begin

	next_key_0 <= g(current_key(31 downto 0)) xor current_key(127 downto 96);
	next_key_1 <= next_key_0 xor current_key(95 downto 64);
	next_key_2 <= next_key_1 xor current_key(63 downto 32);
	next_key_3 <= next_key_2 xor current_key(31 downto 00);
	next_key   <= next_key_0 & next_key_1 & next_key_2 & next_key_3;

end Behavioral;

