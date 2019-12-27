#include "test.h"
/** Testcases for Question number 70 
 * climbStairs
*/

void Test_climbStairs() {
  /* Empty Test */
  int k = 0;
  assert(climbStairs(k) == 0);
  k = 38;
  assert(climbStairs(k) == 63245986);
  k = 45;
  assert(climbStairs(k) == 1836311903);


  return;
}