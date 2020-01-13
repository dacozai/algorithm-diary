#include "test.h"
/** Question no.238. medium - Product of Array Except Self 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, January, 2020 
 * Source : https://leetcode.com/problems/product-of-array-except-self/
 * 
 * Given an array nums of n integers where n > 1,  return an array output such that output[i] is 
 * equal to the product of all the elements of nums except nums[i].
 * Note: Please solve it without division and in O(n).
 * 
 * Follow up:
 * Could you solve it with constant space complexity? (The output array does not count as 
 * extra space for the purpose of space complexity analysis.)
 * 
*/

/** BruteForce Solution
 * Runtime 24-36 ms	MeMory 12.4-12.5 MB; 
 * faster than 100%, less than 100% 
 * O(n) ; O(1)
*/
std::vector<int> productExceptSelf(std::vector<int>& nums) {
  int mul=1, i;
  std::vector<int> ans(nums.size(), 1);
  for (i=1;i<nums.size();i++)
    ans[i] = ans[i-1]*nums[i-1];
  for (i=nums.size()-1;i>=0;i--) {
    ans[i]*=mul;
    mul*=nums[i];
  }
  return ans;
}