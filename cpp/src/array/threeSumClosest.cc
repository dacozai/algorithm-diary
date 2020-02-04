#include "test.h"
/** Question no 16. medium 3Sum Closest
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020 
 * Source : https://leetcode.com/problems/3sum-closest/
 * 
 * Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
 * Return the sum of the three integers. You may assume that each input would have exactly one solution.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.7 MB; 
 * faster than 100.00%, less than 88.68%
 * O(n^2) ; O(1)
*/

int threeSumClosest(std::vector<int>& nums, int target) {
  std::sort(nums.begin(), nums.end() );
  int ans, sm;
  bool flag = true;
  
  for (int i=0;i<nums.size()-1;i++) {
    int j = i+1, k = nums.size()-1;
    while(j<k) {
      sm = nums[i] + nums[j] + nums[k];
      int df = target - sm;
      if (flag) {
        ans = sm; 
        flag = false;
      }
      ans = std::abs(df) <= std::abs(target - ans) ? sm : ans;
      if (df == 0)  return target;
      else if (sm < target) j++;
      else k--;
    }
  }
  
  return ans;
}
