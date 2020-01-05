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

 


  return;
}