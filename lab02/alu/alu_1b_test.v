// Verilog test fixture created from schematic C:\Users\petersjl\Documents\School\CSSE\132\1819c-csse132-petersjl\lab02\alu\alu_1b.sch - Wed Mar 13 10:10:15 2019

`timescale 1ns / 1ps

module alu_1b_alu_1b_sch_tb();

// Inputs
	reg a;
	reg b;
	reg ci;
	reg less;
	reg [2:0] op;
	
// Output
	wire co;
	wire r;
	wire set;
	
// Bidirs

// Instantiate the UUT
   alu_1b UUT (
		.a(a),
		.b(b),
		.ci(ci),
		.op(op),
		.less(less),
		.co(co),
		.set(set),
		.r(r)
   );
// Initialize Inputs
   initial begin
		//set up
		a = 0;
		b = 0;
		ci = 0;
		op = 000;
		less = 0;
		
		#100;
		
		//test and /////////////
		
		//and 1
		#1;
		if((r == 0)) 
			$display("pass and 1");
		else
			$display("FAIL and 1");
		
		//and 2
		a = 1;
		#1;
		if((r == 0)) 
			$display("pass and 2");
		else
			$display("FAIL and 2");
			
		//and 3
		b = 1;
		#1;
		if((r == 1)) 
			$display("pass and 3");
		else
			$display("FAIL and 3");
			
		//and 4
		a = 0;
		#1;
		if((r == 0)) 
			$display("pass and 4");
		else
			$display("FAIL and 4");
			
		//test or ///////////////
		a = 0;
		b = 0;
		op = 001;
		
		//or 1
		#1;
		if((r == 0)) 
			$display("pass or 1");
		else
			$display("FAIL or 1");
			
		//or 2
		a = 1;
		#1;
		if((r == 1)) 
			$display("pass or 2");
		else
			$display("FAIL or 2");
			
		//or 3
		b = 1;
		#1;
		if((r == 1)) 
			$display("pass or 3");
		else
			$display("FAIL or 3");
			
		//or 4
		a = 0;
		#1;
		if((r == 1)) 
			$display("pass or 4");
		else
			$display("FAIL or 4");
			
		//test add ///////////////
		a = 0;
		b = 0;
		ci = 0;
		op = 010;
		
		//add 1
		#1;
		if((r == 0) && (co == 0)) 
			$display("pass add 1");
		else
			$display("FAIL add 1");
			
		//add 2
		a = 1;
		#1;
		if((r == 1) && (co == 0)) 
			$display("pass add 2");
		else
			$display("FAIL add 2");
			
		//add 3
		b = 1;
		#1;
		if((r == 0) && (co == 1)) 
			$display("pass add 3");
		else
			$display("FAIL add 3");
		
		//add 4
		ci = 1;
		#1;
		if((r == 1) && (co == 1)) 
			$display("pass add 4");
		else
			$display("FAIL add 4");
			
		//test subtract/////////////
		op = 64'b110;
		a = 64'b0;
		b = 64'b0;
		ci = 64'b0;
		
		//sub 1
		#1
		if((r == 1) && (co == 0))
			$display("pass sub 1");
		else
			$display("FAIL sub 1");
		
		//sub 2
		a = 64'b1;
		
		#1
		if((r == 0) && (co == 1))
			$display("pass sub 2");
		else
			$display("FAIL sub 2");
		
		//sub 3
		b = 64'b1;
		
		#1
		if((r == 1) && (co == 0))
			$display("pass sub 3");
		else
			$display("FAIL sub 3");
			
		//sub 4
		a = 64'b0;
		
		#1
		if((r == 0) && (co == 0))
			$display("pass sub 4");
		else
			$display("FAIL sub 4");
			
		//sub 5
		ci = 64'b1;
		
		#1
		if((r == 1) && (co == 0))
			$display("pass sub 5");
		else
			$display("FAIL sub 5");
			
		//sub 6
		b = 64'b0;
		
		#1
		if((r == 0) && (co == 1))
			$display("pass sub 6");
		else
			$display("FAIL sub 6");
			
		//sub 7
		a = 64'b1;
		
		#1
		if((r == 1) && (co == 1))
			$display("pass sub 7");
		else
			$display("FAIL sub 7");
		
	end
endmodule
