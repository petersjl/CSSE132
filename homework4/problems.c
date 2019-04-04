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


/**
 * This function counts the number of characters in the given string.
 *
 * For example: length("Thing") returns 5.
 * For this function, You MUST use the array brackets: [ and ].
 * You MUST NOT call other functions from length().
 *
 * @param str - a string to measure
 * @returns the number of characters, excluding the null terminator.
 */
int length(char* string)
{
  // TODO: your code goes here.  You may also want to change the return
  // statement.
  int i = 0;
  while(string[i] != '\0'){
    i++;
  }
  return i;
}


/**
 * This function is the same as length() but doesn't use array operators.
 *
 * For this function, You MUST NOT use the square brackets: [ or ].
 * You MUST NOT call other functions from lengthNoArrays().
 *
 * @param str - a string to measure
 * @returns the number of characters, excluding the null terminator.
 */
int lengthNoArrays(char* string)
{
  // TODO: your code goes here.  You may also want to change the return
  // statement.
  int i = 0;
  while(*(string + i) != '\0'){
    i++;
  }
  return i;
}


/**
 * This function takes an integer and zeroes out every second bit.
 * For example: Since 0xF = 1111 and 0xA = 1010,
 *              bitDropper(0xFFFFFFFF) returns 0xAAAAAAAA
 * @param input - the integer to modify
 * @return the same integer except with every other bit zeroed.
 */
int bitDropper(int input)
{
  // TODO: your code goes here.  You may also want to change the return
  // statement.
  int check = 0xAAAAAAAA;
  return input & check;
}


/**
 * This function iterates through a string and changes any lowercase vowels
 * (a, e, i, o, u) to their uppercase equivalents.
 *
 * This function modifies the string (it does not make a copy).
 * You can assume the string is properly null-terminated.
 * Write this function yourself using a for loop.
 *
 * @param tochange - the string to change
 * @return the number of vowels up-cased.
 */
int upcaseVowels(char* tochange)
{
  // TODO: your code goes here.  You may also want to change the return
  // statement.
  int ln = length(tochange);
  int upcased = 0;
  for (int i = 0; i < ln; i++){
    switch(tochange[i]){

      case 'a' :
        tochange[i] = 'A';
        upcased++;
        break;

      case 'e' :
        tochange[i] = 'E';
        upcased++;
        break;

      case 'i' :
        tochange[i] = 'I';
        upcased++;
        break;

      case 'o' :
        tochange[i] = 'O';
        upcased++;
        break;

      case 'u' :
        tochange[i] = 'U';
        upcased++;
        break;

    }
  }
  return upcased;
}

/** DO NOT create a main function in this file or the test executable won't work. **/
