#include "test.h"
/** Question 1315 medium - Sum of Nodes with Even-Valued Grandparent
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, January, 2019 
 * Source : https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
 * 
 * Given a binary tree, return the sum of values of nodes with even-valued grandparent.  
 * (A grandparent of a node is the parent of its parent, if it exists.)
 * 
 * If there are no nodes with an even-valued grandparent, return 0. 
 * 
*/

/** Solution
 * Runtime 24 ms	MeMory 31.4 MB; 
 * faster than 100%, less than 100% 
 * O(log n) ; O(log n)
*/

class Solution {
public:
  int sumEvenGrandparent(TreeNode* root) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int myAns = 0;
    myAns += addWithGrandChild(root->left,  false, root->val%2==0);
    myAns += addWithGrandChild(root->right, false, root->val%2==0);
    return myAns;
  }
  
  int addWithGrandChild(TreeNode* myRoot, bool g_f, bool b_f) {
    if (myRoot == NULL) return 0;
    int p = 0;
    if (g_f) p+=myRoot->val;
    p += addWithGrandChild(myRoot->left,  b_f, myRoot->val%2==0);
    p += addWithGrandChild(myRoot->right, b_f, myRoot->val%2==0);
    return p;
  }
};