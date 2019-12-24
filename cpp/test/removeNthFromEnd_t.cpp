#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 19 
 * removeNthFromEnd
*/

void Test_removeNthFromEnd() {
  /* LeetCode Test */
  int arr[5] = {1,2,3,4,5};
  ListNode p = ListNode(arr[0]);
  for (int i=1;i<5;i++) {
    p.next = &ListNode(arr[i]); 
    p = p.next;
  }
  ListNode* ans = removeNthFromEnd(&p,2);


  return;
}