--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : firepanel.vhf
-- /___/   /\     Timestamp : 10/09/2026 13:50:14
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan6 -flat -suppress -vhdl /home/ise/ISE/lab_firepanel_group64/firepanel.vhf -w /home/ise/ISE/lab_firepanel_group64/firepanel.sch
--Design Name: firepanel
--Device: spartan6
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity firepanel is
   port ( Z0    : in    std_logic; 
          Z1    : in    std_logic; 
          Z2    : in    std_logic; 
          Z3    : in    std_logic; 
          C0    : out   std_logic; 
          C1    : out   std_logic; 
          VALID : out   std_logic);
end firepanel;

architecture BEHAVIORAL of firepanel is
   attribute BOX_TYPE   : string ;
   signal XLXN_16  : std_logic;
   signal XLXN_20  : std_logic;
   signal XLXN_23  : std_logic;
   signal C1_DUMMY : std_logic;
   component OR2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of OR2 : component is "BLACK_BOX";
   
   component AND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2 : component is "BLACK_BOX";
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
begin
   C1 <= C1_DUMMY;
   XLXI_1 : OR2
      port map (I0=>Z1,
                I1=>Z0,
                O=>XLXN_23);
   
   XLXI_2 : AND2
      port map (I0=>XLXN_16,
                I1=>Z1,
                O=>XLXN_20);
   
   XLXI_7 : OR2
      port map (I0=>Z3,
                I1=>Z2,
                O=>C1_DUMMY);
   
   XLXI_8 : INV
      port map (I=>Z2,
                O=>XLXN_16);
   
   XLXI_9 : OR2
      port map (I0=>Z3,
                I1=>XLXN_20,
                O=>C0);
   
   XLXI_10 : OR2
      port map (I0=>C1_DUMMY,
                I1=>XLXN_23,
                O=>VALID);
   
end BEHAVIORAL;


