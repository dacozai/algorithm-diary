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




  return;
}