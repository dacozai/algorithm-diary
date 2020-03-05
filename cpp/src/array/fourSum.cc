#include "test.h"
/** Question no 18. medium 4Sum
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, March, 2020 
 * Source : https://leetcode.com/problems/4sum/
 * 
 * Given an array nums of n integers and an integer target, are there elements a, b, c, 
 * and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
 * 
*/

/** Solution
 * Runtime 36 ms	MeMory 8 MB; 
 * faster than 65.36%, less than 100.00%
 * O(n^3) ; O(n)
*/

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> ans;
    int sz = nums.size();
    
    for (int i=0;i<sz;i++) {
      if (i>0&&nums[i]==nums[i-1])  continue;
      for (int j=i+1;j<sz;j++) {
        if (j>i+1 && nums[j] == nums[j-1])  continue;
        int m=j+1, n = sz-1;
        while (m<n) {
          if (nums[i]+nums[j]+nums[m]+nums[n] < target) m++;
          else if (nums[i]+nums[j]+nums[m]+nums[n] > target) n--;
          else if (m>j+1 && nums[m]==nums[m-1]) m++;
          else if (n<sz-1 && nums[n]==nums[n+1]) n--;
          else if (nums[i]+nums[j]+nums[m]+nums[n] == target) {
            ans.push_back({nums[i], nums[j], nums[m], nums[n]});
            m++;
            n--;
          }
        }
      }
    }
    
    return ans;
  }
