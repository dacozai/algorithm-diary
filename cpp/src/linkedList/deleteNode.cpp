#include "test.h"
/** Question no.237 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 24th, December, 2019 
 * Source : https://leetcode.com/problems/delete-node-in-a-linked-list/
 * Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 9.3 MB; 
 * faster than 81.92%, less than 100.00% 
*/
void deleteNode(ListNode* node) {
  node->val = node->next->val;
  node->next = node->next->next;
}