#include "test.h"
/** Question no 94 medium Binary Tree Inorder Traversal 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 22th, January, 2020
 * Source : https://leetcode.com/problems/binary-tree-preorder-traversal/
 * 
 *  Given a binary tree, return the preorder traversal of its nodes' values.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9.1 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(n)
*/

std::vector<int> preorderTraversal(TreeNode* root) {
  std::vector<int> vec;
  std::stack<TreeNode*> stk;
  TreeNode *tmp = root;
  while (tmp != NULL || !stk.empty()) {
    while (tmp != NULL) {
      vec.push_back(tmp->val);
      stk.push(tmp->right);
      tmp = tmp->left;
    }
    tmp = stk.top();
    stk.pop();
  }

  return vec;
}