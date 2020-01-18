#include "test.h"
/** Question 283. easy Move Zeroes
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 17th, January, 2020
 * Source : https://leetcode.com/problems/move-zeroes/
 * 
 * Given an array nums, write a function to move all 0's to the end of it 
 * while maintaining the relative order of the non-zero elements.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 9.4 MB; 
 * faster than 99.95%, less than 58.33% 
 * O(n) ; O(1)
*/

void moveZeroes(std::vector<int>& nums) {
  int pos = 0;
  for (int i=0; i<nums.size();i++){
    if (nums[i] != 0 ) {
      nums[pos] = nums[i];
      ++pos;
    }
  }
  for (; pos<nums.size();pos++)
    nums[pos] = 0;
}
