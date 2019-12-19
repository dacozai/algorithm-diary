#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 121
 * maxProfit
*/

void Test_maxProfit() {
  /* Test Odd length array */
  std::vector<int> vec {1, 4, 2};
  assert(maxProfit(vec) == 3);

  /* Empty Test */
  vec.clear();
  assert(maxProfit(vec) == 0);

  /* Test Even length array*/
  vec = {1,4,2,3};
  assert(maxProfit(vec) == 3);

  /* LeetCode Test */
  vec = {7,1,5,3,6,4};
  assert(maxProfit(vec) == 5);

  /* No Choice */
  vec = {2,1};
  assert(maxProfit(vec) == 0);

  return;
}