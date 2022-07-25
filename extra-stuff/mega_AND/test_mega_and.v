`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:23:33 03/13/2019
// Design Name:   mega_and
// Module Name:   C:/Users/petersjl/Documents/School/CSSE/132/1819c-csse132-petersjl/extra-stuff/mega_AND/test_mega_and.v
// Project Name:  mega_AND
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mega_and
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mega_and;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [63:0] R;

	// Instantiate the Unit Under Test (UUT)
	mega_and uut (
		.A(A), 
		.B(B), 
		.R(R)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A = 64'b1111111111111111111111111111111111111111111111111111111111111111;
		B = 64'b1010101010101010101010101010101010101010101010101010101010101010;
		
		#10;
		
		if (R == 64'hAAAAAAAAAAAAAAAA)
		begin
		$display("It worked");
		end
		else begin
		$display("You suck");
		end
		
		B = 1;
		A = -1;
		repeat(10) begin
		A = A + 1;
			repeat(10) begin
				B = B + 1;
				#1;
				if(R == (A & B))
				begin
					$display("It worked");
				end
				else begin
					$display("FAIL");
				end
			end
		end
		
	end
      
endmodule

