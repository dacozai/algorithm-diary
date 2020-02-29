#include "test.h"
#include <queue>
/** Question no 102 medium Binary Tree Level Order Traversal
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, February, 2020
 * Source : https://leetcode.com/problems/binary-tree-level-order-traversal/
 * 
 * Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
 * 
*/

/** Solution - BFS
 * Runtime 4 ms	MeMory 12.8 MB; 
 * faster than 94.23%, less than 100.00%
 * O(n) ; O(n) 
*/

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
    if (root == NULL) return {};
    std::queue<TreeNode*> nodeQ;
    std::queue<int> posQ;
    std::vector<std::vector<int>> vec;
    
    int pos = 0;
    TreeNode* tmp = root;
    nodeQ.push(tmp);
    posQ.push(pos);
    std::vector<int> subVec;
    
    while (!nodeQ.empty()) {
      TreeNode* tmpNode = nodeQ.front();
      int tmpPos = posQ.front();
      nodeQ.pop();
      posQ.pop();
      if (pos != tmpPos){
        vec.push_back(subVec);
        subVec.clear();
        pos++;
      }
      subVec.push_back(tmpNode->val);
      
      if (tmpNode->left != NULL){
        nodeQ.push(tmpNode->left);
        posQ.push(pos+1);
      }  
      if (tmpNode->right != NULL) {
        nodeQ.push(tmpNode->right);
        posQ.push(pos+1);
      }
    }
    if (subVec.size() > 0)  vec.push_back(subVec);
    
    return vec;
  }
