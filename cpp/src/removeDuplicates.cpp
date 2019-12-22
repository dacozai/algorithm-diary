#include "test.h"
/** Question no.26 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once 
 * and return the new length.
 * 
*/

/** Solution
 * Runtime 16-24 ms	MeMory 9.8-10.0 MB; 
 * faster than 94.09%, less than 72.5% 
 * O(n) ; O(1)
*/
int removeDuplicates(std::vector<int>& nums) {
  if (nums.size() == 0) return 0;
  int j=0;
  for (int i=1;i<nums.size();i++) {
    if (nums[i] != nums[j])
      nums[++j] = nums[i];
  }
  
  return j+1;
}