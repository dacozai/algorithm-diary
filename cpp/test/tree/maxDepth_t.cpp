#include <vector>
#include <iostream>
#include "test.h"
/** Testcases for Question number 104 
 * maxDepth
*/

void Test_maxDepth() {
  /* Empty Test */
  TreeNode* testcase = NULL; 
  assert(maxDepth(testcase) == 0);

  /* One side test */
  testcase = new TreeNode(1);
  testcase->left = new TreeNode(2);
  testcase->left->left = new TreeNode(3);
  testcase->left->right = new TreeNode(4);
  testcase->left->left->left = new TreeNode(5);
  assert(maxDepth(testcase) == 4);


  return;
}