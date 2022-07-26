/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * problems.c: this file is where you implement your solutions
 *             for the homework assignment.
 *
 * This file contains code for homework in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name here!
 *
 * Edited by
 * NAME: Joe Peters
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * This function allocates a new string that contains every other character
 * from the input string.
 * For example, skipper("AbAbAb") returns "AAA"
 *
 * BE SURE to allocate the right number of bytes, no more and no less.
 * DO NOT de-allocate or free the string after you make it.
 *
 * IMPORTANT: any code using this function MUST de-allocate the string.
 *
 * HINT: you may want to copy your "length" function from HW4 into this file so
 * you can use it.
 *
 * @param input - the string to copy some characters from
 * @return the address of a newly allocated string
 */
char* skipper(char* input)
{
  int len = strlen(input);
  char* new = malloc(len/2);
  int i = 0;
  int j = 0;
  while(i < len){
    new[j] = input[i];
    i = i + 2;
    j++;
  }
  return new;
}

int
power(int base, int exp){
  int i = 0;
  int count = 1;
  while(i < exp){
    count *= base;
    i++;
  }
  return count;
}

/**
 * This function reads a string representation of a positive integer and
 * returns the value as an int.
 * For example, string2num("10") returns 10.
 *
 * You may assume the input is a properly formed positive integer.  This means
 * you do not have to handle negative integers or non-integer characters.
 * you MUST NOT call other c functions in string2num unless you implement them
 * yourself in this file.
 *
 * HINT: you may want to copy your "length" function from HW4 into this file so
 * you can use it here.
 *
 * @param input - the string to interpret as an integer
 * @return the value as an integer
 */
int string2num(char* input)
{
  // TODO: your code goes here.  You may also want to change the return
  // statement.
  int i = strlen(input) - 1;
  int exp = 0;
  int num = 0;
  while(i > -1){
    num += (input[i] % 48) * power(10, exp);
    i--;
    exp++;
  }
  return num;
}

/** DO NOT create a main function in this file or the test executable won't work. **/
