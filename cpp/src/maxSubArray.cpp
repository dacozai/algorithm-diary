#include "test.h"
/** Question no.121 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Given an integer array nums, find the contiguous subarray (containing at least one number) 
 * which has the largest sum and return its sum.
 * 
*/

/** Solution
 * Runtime 0-8 ms	MeMory 9.1-9.2 MB; 
 * faster than 72%-100%, less than 99.02% 
 * O(n) ; O(1)
*/
int maxSubArray(std::vector<int>& nums) {
  int max_sum=nums[0], curr_sum=nums[0];
  
  for (int i=1;i<nums.size();i++) {
    curr_sum = curr_sum+nums[i]>=nums[i] ? curr_sum+nums[i]: nums[i]; 
    if (max_sum<curr_sum)
      max_sum = curr_sum;
  }
  return max_sum;
}