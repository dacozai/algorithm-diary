#include "test.h"
/** Question no 590 easy N-ary Tree Postorder Traversal
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 20th, January, 2020
 * Source : https://leetcode.com/problems/n-ary-tree-postorder-traversal/
 * 
 * Given an n-ary tree, return the postorder traversal of its nodes' values.
 * 
 * Nary-Tree input serialization is represented in their level order traversal, 
 * each group of children is separated by the null value (See examples). 
 * 
*/

/** Solution
 * Runtime 64 ms	MeMory 62 MB; 
 * faster than 69.51%, less than 20.00%
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