#
# CSSE 132
# Rose-Hulman Institute of Technology
# Computer Science and Software Engineering
#
# Makefile - This is used to make the homework.
#

default: test censor

test: test.c unity/unity.o problems.c
	gcc -g -o test test.c problems.c unity/unity.o

# TODO: Add a makefile rule to make "censor" here


unity/unity.o: unity/unity.c
	gcc -c -o unity/unity.o -Iunity unity/unity.c

clean:
	rm test censor unity/unity.o
