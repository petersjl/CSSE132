// Verilog test fixture created from schematic C:\Users\petersjl\Documents\School\CSSE\132\1819c-csse132-petersjl\lab02\alu\add1b.sch - Tue Mar 12 19:26:11 2019

`timescale 1ns / 1ps

module add1b_add1b_sch_tb();

// Inputs
   reg b;
   reg ci;
   reg a;

// Output
   wire r;
   wire co;

// Bidirs

// Instantiate the UUT
   add1b UUT (
		.b(b), 
		.ci(ci), 
		.a(a), 
		.r(r), 
		.co(co)
   );
// Initialize Inputs
   initial begin
	  ci = 0;
	  b = 0;
	  a = 0;
	  // Wait 100ns for the simulator to finish initializing
	  #100;
	  
	  //test 1
	  a = 1;
	  #1;
	  if ((r == 1) && (co == 0))begin
		 $display("okay 1");
	  end else begin
		 $display("fail 1");
	  end
	  
	  //test 2
	  b = 1;
	  #1;
	  if ((r == 0) && (co == 1))begin
		 $display("okay 2");
	  end else begin
		 $display("fail 2");
	  end
	  
	  //test 3
	  ci = 1;
	  #1;
	  if ((r == 1) && (co == 1))begin
		 $display("okay 3");
	  end else begin
		 $display("fail 3");
	  end
	  
	  //test 4
	  a = 0;
	  #1;
	  if ((r == 0) && (co == 1))begin
		 $display("okay 4");
	  end else begin
		 $display("fail 4");
	  end
  end
endmodule
