#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 19 
 * removeNthFromEnd
*/

void Test_removeNthFromEnd() {
  /* LeetCode Test */
  int k = 2;
  int arr[] = {1,2,3,4,5};
  ListNode* testcase = arrayToList(arr, 5); 
  removeNthFromEnd(testcase, k);
  int g[] = {1,2,3,5};
  ListNode* goal = arrayToList(g, 4); 
  assert(cmpTwoLinkedLists(&testcase, &goal));

  return;
}