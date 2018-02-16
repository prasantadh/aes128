--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:51:31 02/16/2018
-- Design Name:   
-- Module Name:   D:/pa1038-DO NOT DELETE/aes_128_v3/test_aes_module.vhd
-- Project Name:  aes_128_v3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: aes_module
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_aes_module IS
END test_aes_module;
 
ARCHITECTURE behavior OF test_aes_module IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT aes_module
    PORT(
         clr : IN  std_logic;
         clk : IN  std_logic;
         enc : IN  std_logic;
         key : IN  std_logic_vector(127 downto 0);
         d : IN  std_logic_vector(127 downto 0);
         q : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clr : std_logic := '1';
   signal clk : std_logic := '0';
   signal enc : std_logic := '1';
   signal key : std_logic_vector(127 downto 0) := (others => '0');
   signal d : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal q : std_logic_vector(127 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: aes_module PORT MAP (
          clr => clr,
          clk => clk,
          enc => enc,
          key => key,
          d => d,
          q => q
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 90 ns;
			key <= x"5468617473206D79204B756E67204675";
			d <= x"54776F204F6E65204E696E652054776F";
		wait for 10 ns;
			clr <= '0';


      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
