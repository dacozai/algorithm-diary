#include <iostream>
#include "test.h"
/** Testcases for Question number 19 
 * removeNthFromEnd
*/

void Test_mergeTwoLists() {
  /* LeetCode Test */
  int a[] = {};
  int b[] = {0};
  ListNode* testcase_a = arrayToList(a, 0); 
  ListNode* testcase_b = arrayToList(b, 1); 
  ListNode* testcase_ans=nullptr;
  testcase_ans = mergeTwoLists(testcase_a, testcase_b);
  assert(cmpTwoLinkedLists(&testcase_ans, &testcase_b));

  int a_1[] = {5};
  int b_1[] = {1,2,4};
  testcase_a = arrayToList(a_1, 1); 
  testcase_b = arrayToList(b_1, 3); 
  testcase_ans = mergeTwoLists(testcase_a, testcase_b);
  int g[] = {1,2,4,5};
  ListNode* goal = arrayToList(g, 4); 
  assert(cmpTwoLinkedLists(&testcase_ans, &goal));

  return;
}