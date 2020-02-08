#include "test.h"
/** Question no 965. easy Univalued Binary Tree
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, February, 2020
 * Source : https://leetcode.com/problems/cousins-in-binary-tree/
 * 
 * In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.
 * 
 * Two nodes of a binary tree are cousins if they have the same depth, but have different parents.
 * 
 * We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.
 * Return true if and only if the nodes corresponding to the values x and y are cousins.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 10.7 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(H), height of the tree
*/

class Solution {
  private:
    std::unordered_map<int, int> depth;
    std::unordered_map<int, TreeNode*> parent;
  public:
    bool isCousins(TreeNode* root, int x, int y) {
      dfs(root, NULL);
      return (depth[x] == depth[y]) && (parent[x] != parent[y]);
    }
    void dfs(TreeNode* node, TreeNode* par) {
      if (node != NULL) {
        depth[node->val] = par == NULL? 0: 1+depth[par->val];
        parent[node->val] = par;
        dfs(node->left, node);
        dfs(node->right, node);
      }
    }
};
