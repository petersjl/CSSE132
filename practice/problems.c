/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * problems.c: this file is where you implement your solutions
 *             for the practice problems assignment.
 *
 * This file contains code for practice in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name here!
 *
 * Edited by
 * NAME:
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * This function returns the product of a and b
 * WITHOUT USING the multiply (*) operator.
 *
 * Hint: use a loop.
 *
 * You may assume a and b are both non-negative.
 *
 * @params a,b - numbers to multiply
 * @return the product of a and b.
 */
int multiplyNoStar(int a, int b)
{
  //TODO: implement this function
  return -1;
}

/**
 * This function multiplies all the entries in an array.
 *
 * @param array - an array of integers
 * @param len - the number of integers in the array
 * @return the product of all integers in the array.
 */
int arrayprod(int* array, int len)
{
  //TODO: implement this function
  return -1;
}

/**
 * This function reverses the characters in a string by
 * MODIFYING the input string.
 * If there are an odd number of characters, the middle character
 * doesn't move.
 *
 * You can assume string is not NULL and is properly null-terminated.
 *
 * @param string - a sequence of characters to reverse
 * @return nothing: the input is modified.
 */
void reverseString(char* string)
{
  //TODO: implement this function
  return;
}

/**
 * Returns the number of vowels (upper and lower case) in a string.
 * A, E, I, O and U are vowels.
 *
 * Hint: you may want to create a helper function that determines
 * if a character is a vowel or not.  Remember, 0 is false and all 
 * other integers are true.
 *
 * You can assume string is non-NULL.
 *
 * @param string - the string to examine
 * @return the number of vowels.
 */
int countVowels(char* string)
{
  //TODO: implement this function
  return -1;
}

/**
 * Creates a copy of the input string without vowels.  This function must
 * malloc() the correct number of bytes for the new string (the one without
 * vowels).  It will NOT free() the string -- the caller will free the string.
 *
 * You may assume string is not NULL.
 *
 * Example: removeVowels("this") returns a string "ths"
 *
 * Hint: use countVowels() to figure out how much space to malloc.  You may
 *       also find your helper function from countVowels handy.
 *
 * @param string - the string to copy.
 * @return a new malloc()'ed string that is the same as the input string
 *         but missing its vowels.
 */
char* removeVowels(char* string)
{
  //TODO: implement this function
  return NULL;
}

/** DO NOT create a main function in this file or the test executable won't work. **/
