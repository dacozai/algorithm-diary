#include "test.h"
/** Question no 1365 easy How Many Numbers Are Smaller Than the Current Number
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, March, 2020
 * Source : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 * 
 * Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
 * That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
 * 
 * Return the answer in an array.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 9.3 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(n) 
*/

bool isSubPath(ListNode* head, TreeNode* root) {
  if (!root)  return false;
  return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
}

bool dfs(ListNode* head, TreeNode* root) {
  if (!head) return true; 
  if (!root) return false;
  return head->val == root->val && (dfs(head->next, root->left) || dfs(head->next, root->right));
}
