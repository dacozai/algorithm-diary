#include "test.h"
/** Testcases for Question number 265 
 * minCostII
*/

void Test_minCostII() {
  /* Empty Test */
  std::vector<std::vector<int>> vec = {{1,5,3},{2,9,4}};
  int ans =  minCostII(vec);
  assert(ans == 5);


  return;
}