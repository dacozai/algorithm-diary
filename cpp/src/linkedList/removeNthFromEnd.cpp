#include "test.h"
/** Question no.19 medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 24th, December, 2019 
 * Source : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Given a linked list, remove the n-th node from the end of list and return its head.
 * 
*/

/** Solution
 * Runtime 4-8 ms	MeMory 8.6 MB; 
 * faster than 86.28%, less than 75.00% 
*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
  int len = 0;
  ListNode* tmp = head;
  while (tmp!=NULL) {
    tmp = tmp->next;
    len++;
  }
  if (len==1) return NULL;
  if (len==n) return head->next;
  
  tmp = head;
  for (int i=0;i<len-n-1;i++) {
    tmp = tmp->next;
  }
  
  tmp->next = tmp->next->next;
  return head;
}