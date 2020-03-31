#include "test.h"
/** Question no 61 medium Rotate List
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 31th, March, 2020
 * Source : https://leetcode.com/problems/rotate-list/
 * 
 * Given a linked list, rotate the list to the right by k places, where k is non-negative.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 7.3 MB; 
 * faster than 92.51%, less than 100.00%
 * O(n) ; O(1) 
*/

ListNode* rotateRight(ListNode* head, int k) {
  if (!head || !head->next) return head;
  int len=1;
  ListNode *tmp = head, *newHead;
  while (tmp->next) {
    len++;
    tmp = tmp->next;
  }
  tmp->next = head;
  if(k %= len) {
    for(int i=0; i<len-k; i++) 
      tmp = tmp->next;
  }
  newHead = tmp->next; 
  tmp->next = NULL;
  return newHead;
}
