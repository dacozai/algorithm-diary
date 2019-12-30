#include "test.h"
/** Question no.213 Medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, December, 2019 
 * Source : https://leetcode.com/problems/house-robber-ii/
 * You are a professional robber planning to rob houses along a street. 
 * Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. 
 * That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have security 
 * system connected and it will automatically contact the police if two adjacent houses were broken into 
 * on the same night.
 * 
 * Given a list of non-negative integers representing the amount of money of each house, 
 * determine the maximum amount of money you can rob tonight without alerting the police.
*/

/** Solution
 * Runtime 0 ms	MeMory 8.4 MB; 
 * faster than 100%, less than 100% 
 * O(N) O(1)
*/
int robII(std::vector<int>& nums) {
  if (nums.size() == 0) return 0;
  if (nums.size() == 1) return nums[0];

  int **arr;
  arr = new int *[nums.size()];
  for (int i=0;i<nums.size();i++)
    arr[i] = new int[2];
  arr[1][1] = nums[0];
  int i;
  for (i = 2; i < nums.size(); i++) {
      arr[i][0] = std::max(nums[i - 1] + arr[i - 2][0], arr[i - 1][0]);
      arr[i][1] = std::max(nums[i - 1] + arr[i - 2][1], arr[i - 1][1]);
  }
  return std::max(std::max(nums[i - 1] + arr[i - 2][0], arr[i - 1][0]), arr[i-1][1]);
}