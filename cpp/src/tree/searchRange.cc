#include "test.h"
/** Question no 34 medium Find First and Last Position of Element in Sorted Array
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 30th, March, 2020
 * Source : https://leetcode.com/problems/cousins-in-binary-tree/
 * 
 * Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
 * 
 * Your algorithm's runtime complexity must be in the order of O(log n).
 * 
 * If the target is not found in the array, return [-1, -1].
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8 MB; 
 * faster than 100.00%, less than 100.00%
 * O(log n) ; O(1)
*/

std::vector<int> searchRange(std::vector<int>& nums, int target) {
  int ix1 = lower_bound(nums, target);
  int ix2 = lower_bound(nums, target+1)-1;
  if (ix1 < nums.size() && nums[ix1] == target)
      return {ix1, ix2};
  else
      return {-1, -1};
}

int lower_bound(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size()-1;
    while (lo <= hi) {
        int mid = (hi-lo)/2+lo;
        if (nums[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return lo;
}