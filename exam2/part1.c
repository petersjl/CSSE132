/*
 * part1.c
 *
 * This is one part of the CSSE 132 exam 2 coding part.
 * Complete the functions in this file and be sure to
 * TYPE YOUR NAME IN THIS FILE BELOW.
 *
 * NAME:
 *
 * REQUIREMENTS:
 * 1. Remove each TODO comment after you complete it.
 * 2. Ensure this file compiles before you commit your changes.
 *
 *    WARNING: If your code does not compile, you may get a zero
 *             on this part of the exam.
 *
 * 3. If you want partial credit for a solution that doesn't fully work, describe
 *    what you are attempting to do in comments.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * isAlpha():
 * This function returns zero if the input character is NOT an alphabet
 * character (A-Z or a-z).  If the input IS an alphabet character, this returns
 * non-zero ("true").
 *
 * @param c - the character to check
 * @return 0 if c is not alphabetic, nonzero otherwise.
 */
int isAlpha(char c)
{
    // we are giving you this one for free!
    return ((c >= 'A') && (c <= 'Z'))
        || ((c >= 'a') && (c <= 'z'));
}


/**
 * countChar():
 *
 * Given a character and a string, count how many such copies of the character
 * there are in the string.
 *
 * You may ONLY call functions if they are defined in this file. So, you can 
 * call 'isAlpha()' but not 'strlen()'.
 *
 * @param input - the C string to examine. WARNING: it may be NULL!
 * @param c - the character needed to be counted in input.
 * @return the number of spaces found in the string or 0 if the string is
 *         NULL.
 */
int countChar(char* input, char c)
{
    //TODO: implement this function
    return -1;
}


/**
 * charToNum():
 *
 * Given a character, converts it from an ASCII representation of a digit into
 * an integer.
 * If the input is not a digit char, returns -1.
 *
 * For example:
 *   charToNum('3') returns 3
 *   charToNum('x') returns -1
 *
 * You may ONLY call functions if they are defined in this file. So, you can 
 * call 'isAlpha()' but not 'strlen()'.
 *
 * @input c - the character to convert
 * @return an integer representation of the input c (or -1 if c is not an ASCII
 *         digit).
 */
int charToNum(char c) {
    //TODO: implement this function
    return -1;
}

/**
 * isCompressed():
 * This function reports whether an input string is "compressed".
 *
 * A compressed string is a sequence of ASCII alphabetic chars followed by a
 * single digit between 2 and 9.  ASCII alphabetic chars are in the range of
 * A-Z or a-z (see isAlpha()), and the digit is between character value '2' and
 * '9'.
 *
 * You may ONLY call functions if they are defined in this file. So, you can 
 * call 'isAlpha()' but not 'strlen()'.
 *
 * @param str - the string to examine (nay be NULL or empty!)
 * @return 1 if str is "compressed", otherwise return 0.
 */
int isCompressed(char* str) {
    //TODO: implement this function
    return 0;
}

/**
 * decompress():
 *
 * Following the function above, a compressed string is a sequence of
 * alphabetic chars that ends up with a single digit char between '2' and '9'.
 * This string is actually a compressed expression of a longer string. The
 * number in the end tells how many times the alphabetic sequence in the front
 * was repeated in the original string.
 *
 * For example:
 *  compressed    |    original
 *  ----------------------------------------
 *   "a2"         |     "aa"
 *   "abc3"       |     "abcabcabc"
 *   "woo4"       |     "woowoowoowoo"
 *
 * This function takes a compressed string and creates the decompressed
 * "original" as a NEW STRING on the heap.  Return the newly allocated string.
 *
 * You MAY NOT call any functions from this function except:
 *  - malloc
 *  - free
 *  - any functions defined in this file.
 *
 * @param str - An input string to decompress. This string is 
 *              GUARANTEED to be a valid compressed string.
 * @returns the address of the newly decompressed string.
 */
char* decompress(char* str)
{
    //TODO: implement this function
    return NULL;
}





//////////////////////////////////////////////////////////////////////////////
//  STOP!                                                                   //
// DO NOT CREATE A main() FUNCTION IN THIS FILE OR THE TESTS WON'T WORK!    //
//////////////////////////////////////////////////////////////////////////////

