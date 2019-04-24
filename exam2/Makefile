#
# Makefile for CSSE 132 Exam 2
#

# IMPORTANT: all lines after each rule must start with a tab (not spaces)

default: test

unity/unity.o: unity/unity.c
	gcc -c -o unity/unity.o -Iunity unity/unity.c

test: test.c part1.c unity/unity.o
	gcc -g -o test test.c part1.c unity/unity.o

decompress: decompress.c
	gcc -g -o decompress support/decompress.lib decompress.c

clean:
	rm -f test unity/unity.o decompress
