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

std::vector<int> postorderTraversal(TreeNode* root) {
  std::vector<int> vec;
  std::stack<TreeNode*> stk;
  TreeNode* tmp = root;
  
  while(tmp!=NULL || !stk.empty()) {
    TreeNode* in_tmp;
    while (tmp != NULL) {
      in_tmp = tmp->left;
      tmp->left = NULL;
      stk.push(tmp);
      tmp = in_tmp;
    }
    tmp = stk.top();
    if (tmp->right == NULL) {
      vec.push_back(tmp->val);
      stk.pop();
      tmp = NULL;
    } else {
      in_tmp = tmp->right;
      tmp->right = NULL;
      tmp = in_tmp;
    }
  }
  
  return vec;
}
