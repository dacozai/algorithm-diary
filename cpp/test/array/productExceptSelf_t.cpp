#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 238 
 * sumZero
*/

void Test_productExceptSelf() {
  /* LeetCode Test */
  std::vector<int> input {1,2,3,4};
  std::vector<int> goal {24,12,8,6};
  assert(chkVecAreSame(productExceptSelf(input), goal));
 

  return;
}