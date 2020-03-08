#include "test.h"
/** Question no 1373 hard Maximum Sum BST in Binary Tree
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, March, 2020
 * Source : https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/
 * 
 * Given a binary tree root, the task is to return the maximum sum of all keys of any sub-tree which is also a Binary 
 * Search Tree (BST).
 * 
 * Assume a BST is defined as follows:
 * 
 * The left subtree of a node contains only nodes with keys less than the node's key.
 * The right subtree of a node contains only nodes with keys greater than the node's key.
 * Both the left and right subtrees must also be binary search trees.
 * 
*/

/** Solution
 * Runtime 192 ms	MeMory 66.67 MB; 
 * faster than 66.67%, less than 100.00%
 * O(n) ; O(n) 
*/

class Solution {
public:
  int ans = 0;
  int maxSumBST(TreeNode* root) {
    traverse(root);
    return ans;
  }
  
  int traverse(TreeNode* root) {
    if (!root)  return 0;
    if (!root->left && !root->right) {
      ans = std::max(ans, root->val);
      return root->val;
    }
    int left_val = traverse(root->left);
    int right_val = traverse(root->right);
    if (left_val>INT_MIN && right_val>INT_MIN) {
      if (root->left !=NULL && root->left->val  >= root->val)  return INT_MIN;
      if (root->right!=NULL && root->right->val <= root->val)  return INT_MIN;
      int sum_up = root->val + left_val + right_val;
      ans = std::max(ans, sum_up);
      return sum_up;
    }
    return INT_MIN;
  }
};
