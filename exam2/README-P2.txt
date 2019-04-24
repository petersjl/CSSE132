+-------------------------------+
| CSSE 132 EXAM 2 INSTRUCTIONS  |
| CODING PART                   |
| SPRING TERM 2018-2019         |
+-------------------------------+

This file contains mainly instructions for Problem 2.  The most important parts
of the coding section of this exam are written on the paper given to you by
your instructor.

***** IMPORTANT *****
before you leave the classroom, read and follow ALL instructions on
the front page of the exam handout paper.


================================
  PROBLEM 1:
================================
Complete the functions in part1.c.
To test your work, make and run the "test" program (like you did for your homework).


================================
  PROBLEM 2:
================================

Create a new program called "decompress" that takes one or more command-line
arguments and attempts to "decompress" them using the decompress() function
from part1.c.  If it encounters any not-compressed strings (see part1.c), it
will print an error message and exit, otherwise it prints all of the arguments
next to their decompressed equivalent.

Your program must satisfy the following specifications:

[ ] You must implement this in a new file called "decompress.c"

[ ] Do not include any of your code from part1. We provide a 
    complete and correct implementation of part1. This will allow
    you to use any functions from part1, even if you did not complete
    them. Add this exact line to the top of your "decompress.c" file:
    #include "support/part1.h"

[ ] When run from the command line with at least one argument, your program will (for each of the arguments):
    (1) decompress the argument as done in Problem 1 (the decompress()
        function), allocating space for it on the heap.
    (2) add the argument to an array
    (3) print the original and decompressed version of the string

    For example (the pi prints "pi@my-pi:~$" as the prompt):

    pi@my-pi:~$  ./decompress na3 foo2
    na3 -> nanana
    foo2 -> foofoo
    pi@mi-pi:~$

[ ] Be sure you don't have memory leaks: free any space you malloc or
    that is allocated for you by a function.

[ ] If fewer than one argument is provided, print a message that
    tells the user how to run the program:

    pi@my-pi:~$ ./decompress
    Usage: ./decompress compressed-str [compressed-str2 ...]
    pi@my-pi:~$

[ ] If any of the arguments is NOT compressed, print this an error message (see
    below for the exact format) and don't decompress anything:

    pi@my-pi:~$  ./decompress na3 trash foo2
    ERROR: UNABLE TO DECOMPRESS: trash
    pi@mi-pi:~$

* The makefile already has a rule that will make "decompress" from
  decompress.c, but you must create the "decompress.c" file.

* Do not forget to "git add" the file before you commit and push your
  solutions.

* Remember, the function signature for main is:

     int main(int argc, char** argv) { . . . }

* Make sure your name is in your decompress.c file before you turn it in.


