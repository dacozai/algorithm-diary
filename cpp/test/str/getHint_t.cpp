#include <iostream>
#include "test.h"
/** Testcases for Question number 299 
 * getHint
*/

void Test_getHint() {
  /* LeetCode Test */
  std::string secret = "1807";
  std::string guess  = "7810";
  std::string goal   = "1A3B";
  assert(goal == getHint(secret, guess));

  secret = "1123";
  guess = "0111";
  goal = "1A1B";
  assert(goal == getHint(secret, guess));

  secret = "1122";
  guess = "1222";
  goal = "3A0B";
  assert(goal == getHint(secret, guess));


  return;
}