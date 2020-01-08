#include "test.h"
/** Question no.1161 medium - Maximum Level Sum of a Binary Tree
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, January, 2019 
 * Source : https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
 * 
 * Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.
 * 
 * Return the smallest level X such that the sum of all the values of nodes at level X is maximal. 
 * 
*/

/** Solution
 * Runtime 220 ms	MeMory 70.4 MB; 
 * faster than 86.78%, less than 100.00% 
 * O(n) ; O(1)
*/
int maxLevelSum(TreeNode* root) {
  int l_w = 1, l_b = 1;
  unordered_map<int, int> m;
  
  m[l_w] += root->val;
  searchLevel(root->left , m, l_w+1);
  searchLevel(root->right, m, l_w+1);
  
  for (auto c: m)
    if (m[l_b] < c.second)
      l_b = c.first;
  return l_b;
}
void searchLevel(TreeNode* root, unordered_map<int, int>& m, int l_w) {
  if (root==NULL) return;
  m[l_w] += root->val;
  searchLevel(root->left , m, l_w+1);
  searchLevel(root->right, m, l_w+1);
}