#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//
//
//  IMPORTANT: SEE main() below for more instructions.
//
//

/**
 * Returns 1 if the given character is an upper case letter, 0 otherwise.
 */
int isUpper(char c)
{
  return c >= 'A' && c <= 'Z';
}

/**
 * Returns 1 if the given character is a lower case letter, 0 otherwise.
 */
int isLower(char c)
{
  return c >= 'a' && c <= 'z';
}

/**
 * Transposes an upper-case input character "num" spots forward in the
 * alphabet, wrapping around to the beginning.
 * 
 * For example:
 *    transposeUpper('A', 1) returns 'B'.
 *    transposeUpper('Z', 1) returns 'A'.
 *    transposeUpper('D', 3) returns 'G'.
 *
 * Assume:
 *  num will always be positive
 *  c is an UPPERCASE letter (no numbers or special characters).
 *
 *  @param c: the character to transpose
 *  @param num: the number of positions to transpose it
 *  @return the transposed character.
 */
char transposeUpper(char c, unsigned int num)
{
  // TODO: implement this
  return c;
}

/**
 * Same as transposeUpper, but for lower-case characters.
 */
char transposeLower(char c, unsigned int num)
{
  // TODO: implement this
  return c;
}


/**
 * Transposes all the letters in the string, but leaves the non-letter characters alone.
 * This function also allocates space and COPIES the input string into the new
 * space.  Return a pointer to the new string.
 *
 * For example, after this line:
 *   char* result = transposeString("A big Fox.", 2);
 * result points to "C dki Hqz." and needs to be free()'ed.
 *
 * HINT: use isUpper and isLower!
 * HINT: You will also need to use malloc.
 *
 * It is ok to assume:
 *  - the inputString is well-formed (null-terminated)
 *  - num is positive
 *
 * @param inputString: a C string to read and transpose
 * @param num: the number of positions to transpose each letter
 */
char* transposeString(const char* inputString, unsigned int num)
{
  // TODO: implement this
  return NULL;
}



int
main(int argc, char** argv)
{

  // This uses printf to print the name of the program on its own line (hint:
  // it is the first argument value).  For example, if the program is run like this:
  //   ./part1 foo bar
  // it will print:
  //   ./part1
  printf("%s\n", argv[0]);

  // TODO:  Finish transposeUpper() (there are printf tests here)
  printf("transposeUpper('A', 1) = %c (Should be 'B')\n", transposeUpper('A', 1));
  printf("transposeUpper('Z', 1) = %c (Should be 'A')\n", transposeUpper('Z', 1));
  printf("transposeUpper('Z', 3) = %c (Should be 'C')\n", transposeUpper('Z', 3));
  printf("transposeUpper('D', 3) = %c (Should be 'G')\n", transposeUpper('D', 3));
  // TODO: Finish transposeLower() (you can put tests here if you want)

  // TODO: Finish transposeString() (this tests it)
  char* result;
  result = transposeString("A big Fox.", 2);
  printf("Transposed: %s (Should be C dki Hqz.)\n", result);
  free(result);

  return 0;
}

