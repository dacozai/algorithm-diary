#include "test.h"
/** Question no.198 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, December, 2019 
 * Source : https://leetcode.com/problems/house-robber/
 * You are a professional robber planning to rob houses along a street. 
 * Each house has a certain amount of money stashed, the only constraint stopping you 
 * from robbing each of them is that adjacent houses have security system connected and 
 * it will automatically contact the police if two adjacent houses were broken into on the same night.
 * 
 * Given a list of non-negative integers representing the amount of money of each house, 
 * determine the maximum amount of money you can rob tonight without alerting the police.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.5 MB; 
 * faster than 100%, less than 98.11% 
 * O(N) O(1)
*/
int rob(std::vector<int>& nums) {
  int prevMax = 0;
  int currMax = 0;
  for (int v:nums) {
    int tmp = currMax;
    currMax = std::max(prevMax+v,currMax);
    prevMax = tmp;
  }
  return currMax;
}