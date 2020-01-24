#include "test.h"
/** Question no 145 hard Binary Tree Postorder Traversal
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 24th, January, 2020
 * Source : https://leetcode.com/problems/binary-tree-postorder-traversal/
 * 
 * Given a binary tree, return the postorder traversal of its nodes' values.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.6 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(n)
*/
class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

std::vector<int> postorder(Node* root) {
  static const int __ = []() {
      std::ios::sync_with_stdio(false);
      std::cin.tie(nullptr);
      std::cout.tie(nullptr);
      return 0;
  }();
  std::vector<int> vec;
  if (root == NULL) return vec;
  for (auto nd: root->children) {
    std::vector<int> tmp = postorder(nd);
    vec.insert(vec.end(), tmp.begin(), tmp.end());
  }
  vec.push_back(root->val);
  return vec;
}