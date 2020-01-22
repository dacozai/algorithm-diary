#include "test.h"
/** Question no 94 medium Binary Tree Inorder Traversal 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 22th, January, 2020
 * Source : https://leetcode.com/problems/binary-tree-inorder-traversal/
 * 
 *  Given a binary tree, return the inorder traversal of its nodes' values.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9.0 MB; 
 * faster than 100.00%, less than 98.00%
 * O(n) ; O(n)
*/

std::vector<int> inorderTraversal(TreeNode* root) {
  static const int __ = []() {
      std::ios::sync_with_stdio(false);
      std::cin.tie(nullptr);
      std::cout.tie(nullptr);
      return 0;
  }();

  std::vector<int> vec;
  std::stack<TreeNode*> stk;
  TreeNode *tmp = root;
  while (tmp != NULL || !stk.empty()) {
    while (tmp != NULL) {
      stk.push(tmp);
      tmp = tmp->left;
    }
    tmp = stk.top();
    vec.push_back(tmp->val);
    stk.pop();
    tmp = tmp->right;
  }
  
  return vec;
}