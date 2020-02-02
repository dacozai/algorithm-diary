#include "test.h"
/** Question no 404 easy Sum of Left Leaves
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, February, 2020
 * Source : https://leetcode.com/problems/sum-of-left-leaves/
 * 
 * Implement strStr().
 * 
 * Find the sum of all left leaves in a given binary tree.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 13.6 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int sumOfLeftLeaves(TreeNode* root) {
  if (root == NULL) return 0;
  if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) 
    return root->left->val + sumOfLeftLeaves(root->right);
  return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
}
