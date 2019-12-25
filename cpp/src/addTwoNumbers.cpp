#include "test.h"
/** Question no.2 medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 25th, December, 2019 
 * Source : https://leetcode.com/problems/add-two-numbers/
 * You are given two non-empty linked lists representing two non-negative integers. 
 * The digits are stored in reverse order and each of their nodes contain a single digit. 
 * Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 * 
*/

/** Solution
 * Runtime 20 ms	MeMory 10.4 MB; 
 * faster than 88.92%, less than 64.00% 
 * O (A+B) O(2)
*/
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  int sum = 0;
  ListNode *p = NULL;
  ListNode **node = &p;
  while(l1!=NULL || l2!=NULL || sum>0) {
    if(l1!=NULL) {
      sum+=l1->val;
      l1=l1->next;
    }
    if(l2!=NULL) {
      sum+=l2->val;
      l2=l2->next;
    }
    (*node)=new ListNode(sum%10);
    sum/=10;
    node=&((*node)->next);
  }        
  return p;
}