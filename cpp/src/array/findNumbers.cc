#include "test.h"
/** Question no 1295 easy Find Numbers with Even Number of Digits
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 15th, March, 2020
 * Source : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 * 
 * Given an array nums of integers, return how many of them contain an even number of digits.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8 MB; 
 * faster than 75.27%, less than 100.00%
 * O(n log n) ; O(1) 
*/

int findNumbers(std::vector<int>& nums) {
  int ans=0;
  for (auto num: nums) {
    int digits=0;
    while (num>0) {
      num/=10;
      digits++;
    }
    if (digits%2==0) ans++;
  }
  return ans;
}
