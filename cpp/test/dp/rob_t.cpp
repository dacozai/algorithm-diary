#include "test.h"
/** Testcases for Question number 198 
 *rob 
*/

void Test_rob() {
  /* Jump Test */
  std::vector<int> vec {2,1,1,2};
  assert(rob(vec) == 4);
  vec.clear();
  assert(rob(vec) == 0);
  vec = {1,3,1};
  assert(rob(vec) == 3);


  return;
}