#include "test.h"
/** Question no 55. medium Jump Game
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, February, 2020
 * Source : https://leetcode.com/problems/jump-game/
 * 
 * Given an array of non-negative integers, you are initially positioned at the first index of the array.
 * 
 * Each element in the array represents your maximum jump length at that position.
 * 
 * Determine if you are able to reach the last index.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 9.9 MB; 
 * faster than 74.47%, less than 96.05%
 * O(n) ; O(n) 
*/

bool canJump(std::vector<int>& nums) {
  std::vector<bool> vec(nums.size(), false);
  vec[0] = true;
  for (int i=0;i<nums.size()-1;i++) {
    int j = i+nums[i]>=nums.size()-1? nums.size()-1:i+nums[i];
    for (; j>i; j--){
      if (vec[j]) break;
      vec[j] = true;
    }
    if(!vec[i])  return false;
  }
  
  return vec[vec.size()-1];
}
