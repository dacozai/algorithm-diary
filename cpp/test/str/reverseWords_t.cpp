#include <iostream>
#include "test.h"
/** Testcases for Question number 151 
 * getHint
*/

void Test_reverseWords() {
  /* LeetCode Test */
  std::string input = "the sky is blue";
  std::string goal   = "blue is sky the";
  assert(goal == reverseWords(input));

  input = "  hello world!  ";
  goal  = "world! hello";
  assert(goal == reverseWords(input));

  input = "a good   example";
  goal  = "example good a";
  assert(goal == reverseWords(input));

  /* One word Case */
  input = "a";
  goal  = "a";
  assert(goal == reverseWords(input));

  return;
}