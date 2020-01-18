#include "test.h"
/** Question no 268 easy - Missing Number
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, January, 2020
 * Source : https://leetcode.com/problems/missing-number/
 * 
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9.9 MB; 
 * faster than 100.00%, less than 82.35%
 * O(n) ; O(1)
*/

int missingNumber(std::vector<int>& nums) {
  int area = nums.size()*(nums.size()+1)/2;
  for (auto abc: nums)  area -= abc;
  return area;
}