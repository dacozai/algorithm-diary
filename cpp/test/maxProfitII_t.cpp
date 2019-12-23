#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 122
 * maxProfit
*/

void Test_maxProfitII() {
  /* Test Odd length array */
  std::vector<int> vec {7,1,5,3,6,4};
  assert(maxProfit_II(vec) == 7);

  /* Empty Test */
  vec.clear();
  assert(maxProfit_II(vec) == 0);

  /* Test Even length array*/
  vec = {1,4,2,3};
  assert(maxProfit_II(vec) == 4);

  /* LeetCode Test */
  vec = {1,2,3,4,5};
  assert(maxProfit_II(vec) == 4);

  /* No Choice */
  vec = {2,1};
  assert(maxProfit_II(vec) == 0);

  return;
}