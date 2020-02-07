#include "test.h"
/** Question no 360. medium Sort Transformed Array
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, February, 2020
 * Source : https://leetcode.com/problems/sort-transformed-array/
 * 
 * Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, 
 * also in sorted non-decreasing order.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 9 MB; 
 * faster than 98.35%, less than 100.00% 
 * O(n) ; O(n)
*/

std::vector<int> sortTransformedArray(std::vector<int>& nums, int a, int b, int c) {
  int left = 0, right = nums.size()-1;
  int pos, it=1, g = 0;
  std::vector<int> v(nums.size());
  if (a <= 0) pos = 0;
  else {
    pos = nums.size()-1;
    g = pos + 2;
    it = -1;
  }
  
  while(left<=right) {
    int LN = calcu(a,b,c,nums[left]);
    int RN = calcu(a,b,c,nums[right]);
    if (LN*it < RN*it) {
      v[pos] = LN;
      left ++;
    } else {
      v[pos] = RN;
      right --;
    }
    pos+=it;
  }
  
  return v;
}

int calcu(int a, int b, int c, int x) {
  return a*x*x + b*x + c;
}
