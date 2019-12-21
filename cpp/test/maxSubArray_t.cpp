#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 53 
 * maxSubArray
*/

void Test_maxSubArray() {
  /* LeetCode Test */
  std::vector<int> vec {-2,1,-3,4,-1,2,1,-5,4};
  assert(maxSubArray(vec) == 6);

  /* Test One element */
  vec = {0};
  assert(maxSubArray(vec) == 0);

  return;
}