#include "test.h"
/** Question 259. medium 3Sum Smaller
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, March, 2020
 * Source : https://leetcode.com/problems/3sum-smaller/
 * 
 * Given an array of n integers nums and a target, find the number of index triplets i, j, k with 0 <= i < j < k < n 
 * that satisfy the condition nums[i] + nums[j] + nums[k] < target.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 7.6 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n^2) ; O(1)
*/

int threeSumSmaller(std::vector<int>& nums, int target) {
  int SZ = nums.size();
  sort(nums.begin(), nums.end());
  int ans = 0;
  
  for (int i=0;i<SZ;i++) {
    int j=i+1, k=SZ-1;
    while (j<k) {
      if (nums[i]+nums[j]+nums[k]>=target) {
        k--;
      } else {
        ans+=k-j;
        j++;
      }
    }
  }
  return ans;
}
