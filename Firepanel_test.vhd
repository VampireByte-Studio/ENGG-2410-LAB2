-- Vhdl test bench created from schematic /home/ise/ISE/lab_firepanel_group64/firepanel.sch - Fri Oct  9 12:50:45 2026
--
-- Notes: 
-- 1) This testbench template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the unit under test.
-- Xilinx recommends that these types always be used for the top-level
-- I/O of a design in order to guarantee that the testbench will bind
-- correctly to the timing (post-route) simulation model.
-- 2) To use this template as your testbench, change the filename to any
-- name of your choice with the extension .vhd, and use the "Source->Add"
-- menu in Project Navigator to import the testbench. Then
-- edit the user defined section below, adding code to generate the 
-- stimulus for your design.
--
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
LIBRARY UNISIM;
USE UNISIM.Vcomponents.ALL;
ENTITY firepanel_firepanel_sch_tb IS
END firepanel_firepanel_sch_tb;
ARCHITECTURE behavioral OF firepanel_firepanel_sch_tb IS 

   COMPONENT firepanel
   PORT( Z0	:	IN	STD_LOGIC; 
          Z1	:	IN	STD_LOGIC; 
          Z2	:	IN	STD_LOGIC; 
          Z3	:	IN	STD_LOGIC; 
          C1	:	OUT	STD_LOGIC; 
          C0	:	OUT	STD_LOGIC; 
          VALID	:	OUT	STD_LOGIC);
   END COMPONENT;

   SIGNAL Z0	:	STD_LOGIC;
   SIGNAL Z1	:	STD_LOGIC;
   SIGNAL Z2	:	STD_LOGIC;
   SIGNAL Z3	:	STD_LOGIC;
   SIGNAL C1	:	STD_LOGIC;
   SIGNAL C0	:	STD_LOGIC;
   SIGNAL VALID	:	STD_LOGIC;
	
	constant period: time := 100ns;
BEGIN

   UUT: firepanel PORT MAP(
		Z0 => Z0, 
		Z1 => Z1, 
		Z2 => Z2, 
		Z3 => Z3, 
		C1 => C1, 
		C0 => C0, 
		VALID => VALID
   );

-- *** Test Bench - User Defined Section ***
   tb : PROCESS
   BEGIN
	--case 0000 1
			Z3 <= '0';
			Z2 <= '0';
			Z1 <= '0';
			Z0 <= '0';
			wait for period;
			
			assert(Z0 = '0' and Z1 = '0' and Z2 = '0' and Z3 = '0')
			report "C0 SHOULD BE '0' C1 SHOULD BE '0' SHOULD VALID SHOULD BE '0'"
			severity error;
			
			--case 0001 2
			Z3 <= '0';
			Z2 <= '0';
			Z1 <= '0';
			Z0 <= '1';
			wait for period;
			
			assert(Z0 = '1' and Z1 = '0' and Z2 = '0' and Z3 = '0')
			report "C0 SHOULD BE '0' C1 SHOULD BE '0' SHOULD VALID SHOULD BE '1'"
			severity error;
			
			--case 0010 3
			Z3 <= '0';
			Z2 <= '0';
			Z1 <= '1';
			Z0 <= '0';
			wait for period;
			
			assert(Z0 = '0' and Z1 = '1' and Z2 = '0' and Z3 = '0')
			report "C0 SHOULD BE '1' C1 SHOULD BE '0' SHOULD VALID SHOULD BE '1'"
			severity error;
			
			--case 0011 4
			Z3 <= '0';
			Z2 <= '0';
			Z1 <= '1';
			Z0 <= '1';
			wait for period;
			
			assert(Z0 = '1' and Z1 = '1' and Z2 = '0' and Z3 = '0')
			report "C0 SHOULD BE '1' C1 SHOULD BE '0' SHOULD VALID SHOULD BE '1'"
			severity error;
			
			--case 0100 5
			Z3 <= '0';
			Z2 <= '1';
			Z1 <= '0';
			Z0 <= '0';
			wait for period;
			
			assert(Z0 = '0' and Z1 = '0' and Z2 = '1' and Z3 = '0')
			report "C0 SHOULD BE '0' C1 SHOULD BE '1' SHOULD VALID SHOULD BE '1'"
			severity error;
			
			--case 0101 6
			Z3 <= '0';
			Z2 <= '1';
			Z1 <= '0';
			Z0 <= '1';
			wait for period;
			
			assert(Z0 = '0' and Z1 = '0' and Z2 = '1' and Z3 = '0')
			report "C0 SHOULD BE '0' C1 SHOULD BE '1' SHOULD VALID SHOULD BE '1'"
			severity error;
			
			WAIT;
   END PROCESS;
-- *** End Test Bench - User Defined Section ***

END;
