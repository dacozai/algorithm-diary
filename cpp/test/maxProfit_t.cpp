#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 121
 * maxProfit
*/

void Test_maxProfit() {
  /* Test Odd length array */
  int arr1[] = {1, 4, 2};
  std::vector<int> vect1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]) );
  assert(maxProfit(vect1) == 3);

  /* Empty Test */
  int arr2[] = {};
  std::vector<int> vect2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );
  assert(maxProfit(vect2) == 0);

  /* Test Even length array*/
  int arr3[] = {1,4,2,3};
  std::vector<int> vect3 (arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]) );
  assert(maxProfit(vect3) == 3);

  /* LeetCode Test */
  int arr4[] = {7,1,5,3,6,4};
  std::vector<int> vect4 (arr4, arr4 + sizeof(arr4) / sizeof(arr4[0]) );
  assert(maxProfit(vect4) == 5);

  /* No Choice */
  int arr5[] = {2,1};
  std::vector<int> vect5 (arr5, arr5 + sizeof(arr5) / sizeof(arr5[0]) );
  assert(maxProfit(vect5) == 0);

  std::cout << "GREAT!" << std::endl;
  return;
}