`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Joe Peters
// 
// Create Date:    08:12:16 03/13/2019 
// Design Name: 
// Module Name:    mega_and 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mega_and(
    input [63:0] A,
    input [63:0] B,
    output [63:0] R
    );
	
	 assign R = A & B;

endmodule
