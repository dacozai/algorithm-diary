#include "test.h"
#include <map>
#include <unordered_map>
/** Question no 1290 easy Convert Binary Number in a Linked List to Integer
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020 
 * Source : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 * 
 * Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. 
 * The linked list holds the binary representation of a number.
 * 
 * Return the decimal value of the number in the linked list.
*/

/** Solution (tedious)
 * Runtime 0  ms	MeMory 8.4 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int getDecimalValue(ListNode* head) {
  int ans = 0;
  ListNode* tmp = head;
  while (tmp!=NULL) {
    ans = ans << 1;
    ans += tmp->val;
    tmp = tmp->next;
  }

  return ans;
}

/** Solution (non shift sol)
 * Runtime 4  ms	MeMory 8.4 MB; 
 * faster than 5x.00%, less than 100.00%
 * O(n) ; O(1)
*/
int getDecimalValue_noshift(ListNode* head) {
  int sz = 0, ans = 0;
  ListNode* tmp = head;
  // count length
  while (tmp!=NULL) {
    ++sz;
    tmp = tmp->next;
  }
  
  sz--;
  tmp = head;
  while (tmp!=NULL) {
    ans += std::pow(2, sz) * tmp->val;
    sz--;
    tmp = tmp->next;
  }
  
  return ans;
}


