#include "test.h"
/** Question no 15. medium 3Sum
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020 
 * Source : https://leetcode.com/problems/3sum/
 * 
 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? 
 * Find all unique triplets in the array which gives the sum of zero.
 * 
 * Note:
 * The solution set must not contain duplicate triplets.
 * 
*/

/** Solution
 * Runtime 92 ms	MeMory 14.6 MB; 
 * faster than 95.38%, less than 98.24%
 * O(n^2) ; O(n)
*/

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
  if (nums.size() < 3) return {};
  std::sort(nums.begin(), nums.end());
  std::vector<std::vector<int>> ans;
  
  for (int i=0;i<nums.size()-1;i++) {
    if (i > 0 && nums[i] == nums[i-1])  continue;
    int j = i+1, k = nums.size()-1;
    int sum;
    while (j<k) {
      sum = nums[i] + nums[j] + nums[k];
      if(sum > 0) k--;
      else if (sum < 0) j++;
      else if (j < k-1 && nums[k] == nums[k-1]) k--;
      else if (j+1 < k && nums[j] == nums[j+1]) j++;
      else {
          ans.push_back({nums[i],nums[j],nums[k]});
          k--;
          j++;
      }
    }
  }
  
  
  return ans;
}
