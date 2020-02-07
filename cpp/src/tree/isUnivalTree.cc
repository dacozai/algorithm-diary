#include "test.h"
#include <map>
/** Question no 965. easy Univalued Binary Tree
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, February, 2020
 * Source : https://leetcode.com/problems/univalued-binary-tree/submissions/
 * 
 * A binary tree is univalued if every node in the tree has the same value.
 * 
 * Return true if and only if the given tree is univalued.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 10.7 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(H), height of the tree
*/

bool isUnivalTree(TreeNode* root) {
  int tp = root->val;
  TreeNode* tmp = root;
  std::stack<TreeNode*> stk;
  
  while (tmp != NULL || !stk.empty()) {
    while (tmp != NULL) {
      stk.push(tmp);
      tmp = tmp->left;
    }
    tmp = stk.top();
    stk.pop();
    if (tmp->val != tp) return false;
    tmp = tmp->right;
  }
  return true;
}
