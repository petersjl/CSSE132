// Verilog test fixture created from schematic C:\Users\petersjl\Documents\School\CSSE\132\1819c-csse132-petersjl\lab02\alu\alu_4b.sch - Thu Mar 14 09:14:54 2019

`timescale 1ns / 1ps

module alu_4b_alu_4b_sch_tb();

// Inputs
   reg [3:0] a;
   reg [3:0] b;
   reg [2:0] op;

// Output
   wire [3:0] r;

// Bidirs

// Instantiate the UUT
   alu_4b UUT (
		.r(r), 
		.a(a), 
		.b(b), 
		.op(op)
   );
// Initialize Inputs
   initial begin
		a = 64'b0000;
		b = 64'b0000;
		op = 64'b000;
		
		#100
		
		//test and//////////
		
		//and 1
		#1
		if(r == 64'b0000)
			$display("pass and 1");
		else
			$display("FAIL and 1");
		
		
		//and 2
		a = 64'b0101;
		b = 64'b1010;
		
		#1
		if(r == 64'b0000)
			$display("pass and 2");
		else
			$display("FAIL and 2");
		
		
		//and 3
		a = 64'b1100;
		b = 64'b1100;
		
		#1
		if(r == 64'b1100)
			$display("pass and 3");
		else
			$display("FAIL and 3");
		
		
		//and 4
		a = 64'b1110;
		b = 64'b1101;
		
		#1
		if(r == 64'b1100)
			$display("pass and 4");
		else
			$display("FAIL and 4");
		
		
		//test or//////////
		a = 64'b0000;
		b = 64'b0000;
		op = 64'b001;
		
		//or 1
		#1
		if(r == 64'b0000)
			$display("pass or 1");
		else
			$display("FAIL or 1");
		
		
		//or 2
		a = 64'b1111;
		
		#1
		if(r == 64'b1111)
			$display("pass or 2");
		else
			$display("FAIL or 2");
		
		
		//or 3
		a = 64'b1000;
		b = 64'b0010;
		
		#1
		if(r == 64'b1010)
			$display("pass or 3");
		else
			$display("FAIL or 3");
		
		
		//or 4
		a = 64'b1100;
		b = 64'b0011;
		
		#1
		if(r == 64'b1111)
			$display("pass or 4");
		else
			$display("FAIL or 4");
		
		
		//test add//////////
		a = 64'b0000;
		b = 64'b0000;
		op = 64'b010;
		
		//add 1
		#1
		if(r == 64'b0000)
			$display("pass add 1");
		else
			$display("FAIL add 1");
		
		
		//add 2
		a = 64'b0001;
		b = 64'b0001;
		
		#1
		if(r == 64'b0010)
			$display("pass add 2");
		else
			$display("FAIL add 2");
		
		
		//add 3
		a = 64'b0110;
		b = 64'b0011;
		
		#1
		if(r == 64'b1001)
			$display("pass add 3");
		else
			$display("FAIL add 3");
		
		
		//add 4
		a = 64'b1111;
		b = 64'b0001;
		
		#1
		if(r == 64'b0000)
			$display("pass add 4");
		else
			$display("FAIL add 4");
		
		
		//test subtract//////////
		a = 64'b0000;
		b = 64'b0000;
		op = 3'b110;
		
		//sub 1
		#1
		if(r == 64'b0000)
			$display("pass sub 1");
		else
			$display("FAIL sub 1");
			
		//sub 2
		a = 64'b1111;
		b = 64'b1111;
		
		#1
		if(r == 64'b0000)
			$display("pass sub 2");
		else
			$display("FAIL sub 2");
			
		//sub 3
		a = 64'b1100;
		b = 64'b0011;
		
		#1
		if(r == 64'b1001)
			$display("pass sub 3");
		else
			$display("FAIL sub 3");
			
		//sub 4
		a = 64'b1001;
		b = 64'b0110;
		
		#1
		if(r == 64'b0011)
			$display("pass sub 4");
		else
			$display("FAIL sub 4");
			
		//sub 5
		a = 64'b0000;
		b = 64'b0001;
		
		#1
		if(r == 64'b1111)
			$display("pass sub 5");
		else
			$display("FAIL sub 5");
			
		//Test Less Than//////////
		a = 64'b0000;
		b = 64'b0000;
		op = 64'b111;
		
		//less 1
		
		#1
		if(r == 64'b0000)
			$display("pass less 1");
		else
			$display("FAIL less 1");
			
		//less 2
		a = 64'b0111;
		b = 64'b0011;
		
		#1
		if(r == 64'b0000)
			$display("pass less 2");
		else
			$display("FAIL less 2");
			
		//less 3
		a = 64'b0011;
		b = 64'b0111;
		
		#1
		if(r == 64'b0001)
			$display("pass less 3");
		else
			$display("FAIL less 3");
			
		//less 4
		a = 64'b1111;
		b = 64'b1000;
		
		#1
		if(r == 64'b0000)
			$display("pass less 4");
		else
			$display("FAIL less 4");
		
		
		
		
		
		
	end	
endmodule
