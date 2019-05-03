/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * test.c - Source file with tests for the homework.
 *          This is a file you need to hand in!
 *          
 *          This file contains the tests you run to verify
 *          the code for homework 4.
 *
 * This file contains code used by labs in the CSSE 132 class.
 * If you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAMES:
 *
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unity/unity.h"

// functions tested by this test harness
int isWordChar(char x);
int wordlen(char* str);

void setUp(void) { }
void tearDown(void) { }

void
test_isWordChar(void)
{
  TEST_ASSERT_EQUAL(1, isWordChar('A'));
  TEST_ASSERT_EQUAL(1, isWordChar('z'));
  TEST_ASSERT_EQUAL(0, isWordChar('"'));
  TEST_ASSERT_EQUAL(0, isWordChar('\0'));
  TEST_ASSERT_EQUAL(0, isWordChar('\n'));
}

void
test_wordlen(void)
{
  TEST_ASSERT_EQUAL(3, wordlen("foo"));
  TEST_ASSERT_EQUAL(0, wordlen(" bar "));
  TEST_ASSERT_EQUAL(0, wordlen("!bang "));
  TEST_ASSERT_EQUAL(0, wordlen("\"quote\""));
  TEST_ASSERT_EQUAL(0, wordlen(""));
  TEST_ASSERT_EQUAL(1, wordlen("a big string"));
}


void
main(int argc, char** argv)
{
  UnityBegin("HW7 test.c");

  RUN_TEST(test_isWordChar);
  RUN_TEST(test_wordlen);

  UnityEnd();
}
