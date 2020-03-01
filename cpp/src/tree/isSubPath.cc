#include "test.h"
/** Question no 1367. medium Linked List in Binary Tree
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, March, 2020
 * Source : https://leetcode.com/problems/linked-list-in-binary-tree/
 * 
 * Given a binary tree root and a linked list with head as the first node. 
 * 
 * Return True if all the elements in the linked list starting from the head correspond to some downward path 
 * connected in the binary tree otherwise return False.
 * 
 * In this context downward path means a path that starts at some node and goes downwards.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 10.7 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(n), height of the tree
*/

bool isSubPath(ListNode* head, TreeNode* root) {
  if (!root)  return false;
  return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
}

bool dfs(ListNode* head, TreeNode* root) {
  if (!head) return true; 
  if (!root) return false;
  return head->val == root->val && (dfs(head->next, root->left) || dfs(head->next, root->right));
}
