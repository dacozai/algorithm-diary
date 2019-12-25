#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 19 
 * removeNthFromEnd
*/

void Test_reverseList() {
  /* LeetCode Test */
  int arr[] = {1,2,3,4,5};
  ListNode* testcase = arrayToList(arr, 5); 
  testcase = reverseList(testcase);

  int g[] = {5,4,3,2,1};
  ListNode* goal = arrayToList(g, 5); 
  assert(cmpTwoLinkedLists(&testcase, &goal));



  return;
}