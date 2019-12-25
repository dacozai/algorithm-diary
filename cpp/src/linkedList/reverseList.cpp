#include "test.h"
/** Question no.206 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 25th, December, 2019 
 * Source : https://leetcode.com/problems/reverse-linked-list/
 * Reverse a singly linked list.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 9.3 MB; 
 * faster than 77.89%, less than 68.7% 
*/
ListNode* reverseList(ListNode* head) {
  ListNode* p = NULL;
  while (head != NULL) {
    if (p==NULL) {
      p = new ListNode(head->val);
    } else {
      ListNode* tmp = p;
      p = new ListNode(head->val);
      p->next = tmp;
    }
    head = head->next;
  }
  return p;
}