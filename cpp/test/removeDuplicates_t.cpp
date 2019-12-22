#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 53 
 * removeDuplicates
*/

void Test_removeDuplicates() {
  /* LeetCode Test */
  std::vector<int> vec {1,1,2};
  assert(removeDuplicates(vec) == 2);

  /* Test no element */
  vec.clear();
  assert(removeDuplicates(vec) == 0);

  vec = {0,0,1,1,1,2,2,3,3,4};
  assert(removeDuplicates(vec) == 5);

  return;
}