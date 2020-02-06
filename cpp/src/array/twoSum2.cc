#include "test.h"
/** Question no 167. easy Two Sum II - Input array is sorted
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020 
 * Source : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * 
 * Given an array of integers that is already sorted in ascending order, 
 * find two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they add up to the target, 
 * where index1 must be less than index2.
 * 
 * Note:
 * Your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution and you may not use the same element twice.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9.5 MB; 
 * faster than 100.00%, less than 82.35%
 * O(n) ; O(1)
*/

std::vector<int> twoSum(std::vector<int>& numbers, int target) {
  int mid = numbers.size()/2;
  int i=0, j=numbers.size()-1;
  if (target<numbers[mid]) {
    j = mid;
  }
  while (i<j) {
    if (numbers[i]+numbers[j] > target)  j--;
    else if (numbers[i]+numbers[j] < target)  i++;
    else  return {i+1,j+1};
  }
  return {};
}