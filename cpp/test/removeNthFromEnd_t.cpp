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
  testcase = removeNthFromEnd(testcase, k);
  int g[] = {1,2,3,5};
  ListNode* goal = arrayToList(g, 4); 
  assert(cmpTwoLinkedLists(&testcase, &goal));

  /* LeetCode Test */
  k = 3;
  int arr_1[] = {1,2,3,4,5};
  testcase = arrayToList(arr_1, 5); 
  testcase = removeNthFromEnd(testcase, k);
  int g_1[] = {1,2,4,5};
  goal = arrayToList(g_1, 4); 
  assert(cmpTwoLinkedLists(&testcase, &goal));

  /* One Elem Test */
  k = 1;
  int arr_2[] = {1};
  testcase = arrayToList(arr_2, 1); 
  testcase = removeNthFromEnd(testcase, k);
  assert(testcase == NULL);

  return;
}