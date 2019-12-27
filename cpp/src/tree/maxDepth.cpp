#include "test.h"
/** Question no.104 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, December, 2019 
 * Source : https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * Given a binary tree, find its maximum depth.
 * 
 * The maximum depth is the number of nodes along the longest path from 
 * the root node down to the farthest leaf node.
 * 
*/

/** Solution
 * Runtime 0-16 ms	MeMory 19.5 MB; 
 * faster than 88.17-100%, less than 56.04% 
 * O(N) O(logN)
*/
int maxDepth(TreeNode* root) {
  if (root == NULL) 
    return 0;
  return 1+std::max(maxDepth(root->right), maxDepth(root->left));
}