/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * test.c - Source file with tests for the exam.
 *          This is a file you need to hand in!
 *
 *          This file contains the tests you run to verify
 *          the code for the exam.
 *
 * This file contains code used by the second exam in the CSSE 132 class.
 * If you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAME:
 *
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unity/unity.h"

// functions tested by this test harness
int countChar(char* input, char c);
int charToNum(char c);
int isCompressed(char* str);
char* decompress(char* str);



void setUp(void) { }
void tearDown(void) { }

// use this to put -1s in malloc space
void scrubHeap(int s, int v) {
  void* ptr = malloc(s);
  memset(ptr, -1, s);
  if(v > 0) { scrubHeap(s,--v); }
  free(ptr);
}


void test_countChar(void) {
  TEST_ASSERT_EQUAL_INT(0, countChar(NULL, 'a'));
  TEST_ASSERT_EQUAL_INT(0, countChar("", 'a'));
  TEST_ASSERT_EQUAL_INT(2, countChar("hello", 'l'));
  TEST_ASSERT_EQUAL_INT(3, countChar(" \t \n \r", ' '));
  TEST_ASSERT_EQUAL_INT(15, countChar("aaaaaaaaaaaaaaa", 'a'));
  TEST_ASSERT_EQUAL_INT(0, countChar("AAAAAAAAAAAAAAA", 'a'));
  TEST_ASSERT_EQUAL_INT(4, countChar("how many spaces are there?", ' '));
}


void
test_charToNum(void)
{
  TEST_ASSERT_EQUAL_INT(-1, charToNum('\0'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('A'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('c'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('O'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum(' '));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('d'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('%'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum('\n'));
  TEST_ASSERT_EQUAL_INT(-1, charToNum(')'));

  TEST_ASSERT_EQUAL_INT(0, charToNum('0'));
  TEST_ASSERT_EQUAL_INT(1, charToNum('1'));
  TEST_ASSERT_EQUAL_INT(2, charToNum('2'));
  TEST_ASSERT_EQUAL_INT(3, charToNum('3'));
  TEST_ASSERT_EQUAL_INT(4, charToNum('4'));
  TEST_ASSERT_EQUAL_INT(5, charToNum('5'));
  TEST_ASSERT_EQUAL_INT(6, charToNum('6'));
  TEST_ASSERT_EQUAL_INT(7, charToNum('7'));
  TEST_ASSERT_EQUAL_INT(8, charToNum('8'));
  TEST_ASSERT_EQUAL_INT(9, charToNum('9'));
}


void
test_isCompressed(void)
{
  TEST_ASSERT_FALSE_MESSAGE(isCompressed(""),
      "The empty string should not be considered compressed");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("a"),
      "The string \"a\" is not compressed.");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("2"),
      "The string \"2\" is not compressed.");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("ax1"),
      "The string \"ax1\" is not compressed (trailing 1).");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("foo'bar"),
      "The string \"foo'bar\" is not compressed (no trailing int).");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("not compressed"),
      "The string \"not compressed\" is not compressed.");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("wtf0"),
      "The string \"wtf0\" is not compressed (zero is not a compression int).");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("cba"),
      "The string \"cba\" is not compressed.");
  TEST_ASSERT_FALSE_MESSAGE(isCompressed("c b a 7"),
      "The string \"c b a 7\" is not compressed (it has spaces).");

  TEST_ASSERT_TRUE_MESSAGE(isCompressed("a2"),
      "The string \"a2\" should be considered compressed.");
  TEST_ASSERT_TRUE_MESSAGE(isCompressed("abc7"),
      "The string \"abc7\" should be considered compressed.");
  TEST_ASSERT_TRUE_MESSAGE(isCompressed("bigstringgoeshere9"),
      "The string \"bigstringgoeshere9\" should be considered compressed.");
  TEST_ASSERT_TRUE_MESSAGE(isCompressed("a4"),
      "The string \"a4\" should be considered compressed.");
}

void
test_decompress(void) {

  char* rv = NULL;

  scrubHeap(16, 8192);
  rv = decompress("a2");
  TEST_ASSERT_NOT_NULL_MESSAGE(rv, "\"a2\" should decompress");
  if(rv) {
    TEST_ASSERT_EQUAL_STRING_LEN("aa", rv, 2);
    free(rv);
  }

  scrubHeap(16, 8192);
  rv = decompress("na4");
  TEST_ASSERT_NOT_NULL_MESSAGE(rv, "\"na4\" should decompress");
  if(rv) {
    TEST_ASSERT_EQUAL_STRING_LEN("nananana", rv, 8);
    free(rv);
  }

  scrubHeap(16, 8192);
  rv = decompress("foo6");
  TEST_ASSERT_NOT_NULL_MESSAGE(rv, "\"foo6\" should decompress");
  if(rv) {
    TEST_ASSERT_EQUAL_STRING_LEN("foofoofoofoofoofoo", rv, 18);
    free(rv);
  }

  scrubHeap(16, 8192);
  rv = decompress("badgermushroomsnake9");
  TEST_ASSERT_NOT_NULL_MESSAGE(rv, "\"badgermushroomsnake9\" should decompress");
  if(rv) {
    TEST_ASSERT_EQUAL_STRING_LEN("badgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnakebadgermushroomsnake", rv, 19*9);
    free(rv);
  }
}



void
main(int argc, char** argv)
{

  printf(">>>>>>>>>>>>>>>  Running tests for CSSE 132 Exam 2.   <<<<<<<<<<<<<<<<<<<<\n");
  printf("   * NOTE: these tests are not complete, you may want to write more tests.\n");
  printf("       This program will not tell you how many points you earn.\n");
  printf("       Your code will be graded by humans.\n");
  printf("   * DEBUGGING HINT: use gdb on this test program if things crash!\n");
  printf("       If tests fail, the output below will tell you which line\n");
  printf("       of test.c to examine\n\n");

  UnityBegin("test.c");

  RUN_TEST(test_countChar);
  RUN_TEST(test_charToNum);
  RUN_TEST(test_isCompressed);
  RUN_TEST(test_decompress);

  UnityEnd();
}
