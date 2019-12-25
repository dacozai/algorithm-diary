#include "test.h"
/** Question no.21 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 25th, December, 2019 
 * Source : https://leetcode.com/problems/merge-two-sorted-lists/
 * Merge two sorted linked lists and return it as a new list. 
 * The new list should be made by splicing together the nodes of the first two lists.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8.9 MB; 
 * faster than 78.46%, less than 27.05% 
 * O(A+B); O(2)
*/
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  ListNode* p = new ListNode(0);
  ListNode* tmp = p;
  while (l1 != NULL || l2 != NULL) {
    if (l1 == NULL || l2 == NULL) {
      tmp->next = l1==NULL?l2:l1;
      break;
    } else {
      if (l1->val >= l2->val) {
        tmp->next = new ListNode(l2->val);
        l2 = l2->next;
      } else {
        tmp->next = new ListNode(l1->val);
        l1 = l1->next;
      }
      tmp = tmp->next;
    }
  }
  return p->next;
}