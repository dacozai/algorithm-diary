#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 1304 
 * sumZero
*/

void Test_sumZero() {
  /* LeetCode Test */
  int k = 1;
  std::vector<int> goal {0};
  assert(chkVecAreSame(sumZero(k), goal));

  k = 3;
  goal = {0,1,-1};
  assert(chkVecAreSame(sumZero(k), goal));
 

  return;
}