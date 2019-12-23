#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 189 
 * rotate
*/

void Test_rotate() {
  /* LeetCode Test */
  std::vector<int> vec {1,2,3,4,5,6,7};
  int k = 3;
  std::vector<int> goal {5,6,7,1,2,3,4};
  rotate(vec, k);
  assert(chkVecAreSame(vec, goal));

  vec = {-1,-100,3,99};
  k = 2;
  goal = {3,99,-1,-100};
  rotate(vec, k);
  assert(chkVecAreSame(vec, goal));


  return;
}