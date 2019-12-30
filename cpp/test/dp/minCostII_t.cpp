#include "test.h"
/** Testcases for Question number 265 
 * minCostII
*/

void Test_minCostII() {
  /* LeetCode Test */
  std::vector<std::vector<int>> vec = {{1,5,3},{2,9,4}};
  int ans =  minCostII(vec);
  assert(ans == 5);

  /* Two options case */
  vec = {{1,2},{3,4}};
  ans =  minCostII(vec);
  assert(ans == 5);

  /* empty Test */
  vec = {};
  ans =  minCostII(vec);
  assert(ans == 0);

  /* Complex Case */
  vec = {{1,2,5,3,7,9},{10,6,3,4,5,6},{14,19,12,17,14,18}};
  ans =  minCostII(vec);
  assert(ans == 17);



  return;
}