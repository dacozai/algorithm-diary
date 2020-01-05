#include "test.h"
/** Question no.1265 medium - Print Immutable Linked List in Reverse
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, January, 2019 
 * Source : https://leetcode.com/problems/print-immutable-linked-list-in-reverse/
 * 
 * You are given an immutable linked list, print out all values of each node in reverse with 
 * the help of the following interface:
 * 
 * ImmutableListNode: An interface of immutable linked list, you are given the head of the list.
 * You need to use the following functions to access the linked list 
 * (you can't access the ImmutableListNode directly):
 * 
 * ImmutableListNode.printValue(): Print value of the current node.
 * ImmutableListNode.getNext(): Return the next node.
 * The input is only given to initialize the linked list internally. 
 * You must solve this problem without modifying the linked list. 
 * In other words, you must operate the linked list using only the mentioned APIs.
 * 
*/

/** Solution
 * Runtime 0-4 ms	MeMory 9.0 - 9.1 MB; 
 * faster than 100.00%, less than 100.00% 
 * O(n) ; O(1)
*/
class Solution {
public:
  void printLinkedListInReverse(ImmutableListNode* head) {
    auto p = head;
    std::stack<ImmutableListNode*> stk;
    while (p != nullptr) {
      stk.push(p);
      p = p->getNext();
    }
    while (!stk.empty()) {
      p = stk.top();
      stk.pop();
      p->printValue();
    }
  }
};

/** Solution (Recursion)
 * Runtime 4 ms	MeMory 9.0 - 9.1 MB; 
 * faster than 75.88%, less than 100.00% 
 * O(n) ; O(1)
*/
class Solution_cur {
private:
  void ptf(ImmutableListNode * p) {
      if(p == nullptr) return;
      auto tmp = p->getNext();
      ptf(tmp);
      p->printValue();
  }
public:
  void printLinkedListInReverse(ImmutableListNode* head) {
    auto p = head;
    ptf(p);
  }
};