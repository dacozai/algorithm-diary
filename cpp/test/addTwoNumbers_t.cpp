#include <iostream>
#include "test.h"
/** Testcases for Question number 2 
 * removeNthFromEnd
*/

void Test_addTwoNumbers() {
  /* LeetCode Test */
  int a[] = {2,4,3};
  int b[] = {5,6,4};
  ListNode* testcase_a = arrayToList(a, 3); 
  ListNode* testcase_b = arrayToList(b, 3); 
  ListNode* testcase_ans=nullptr;
  testcase_ans = addTwoNumbers(testcase_a, testcase_b);
  int g[] = {7,0,8};
  ListNode* goal = arrayToList(g, 3); 
  assert(cmpTwoLinkedLists(&testcase_ans, &goal));

  /* LeetCode Test */
  int a1[] = {2,4,5,4};
  int b1[] = {5,6,4,5};
  testcase_a = arrayToList(a1, 4); 
  testcase_b = arrayToList(b1, 4); 
  testcase_ans = addTwoNumbers(testcase_a, testcase_b);
  int g1[] = {7,0,0,0,1};
  goal = arrayToList(g1, 5); 
  assert(cmpTwoLinkedLists(&testcase_ans, &goal));

  return;
}