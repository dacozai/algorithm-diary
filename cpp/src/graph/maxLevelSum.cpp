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
 * Runtime 120 ms	MeMory 70.5 MB; 
 * faster than 100.00%, less than 100.00% 
 * O(n) ; O(1)
*/
/* static const auto faster = [](){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return nullptr; }(); */
int maxLevelSum(TreeNode* root) {
  int l_w = 0, l_b = 0;
  std::vector<int> vec;
  vec.push_back(root->val);
  if (root->left != NULL)
    searchLevel(root->left, vec, l_w+1);
  if (root->right != NULL)
    searchLevel(root->right, vec, l_w+1);
  
  for (int i=0;i<vec.size();i++)
    if (vec[l_b] < vec[i])
      l_b = i;
  return l_b+1;
}
void searchLevel(TreeNode* root, std::vector<int> vec, int l_w) {
  if (root==NULL) return;
  if (vec.size() <= l_w)
    vec.push_back(root->val);
  else
    vec[l_w] += root->val;
  if (root->left != NULL)
    searchLevel(root->left , l_w+1);
  if (root->right != NULL)
    searchLevel(root->right, l_w+1);
}

