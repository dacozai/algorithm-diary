#include "test.h"
/** Question no 448. easy - Find All Numbers Disappeared in an Array 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 21th, January, 2020
 * Source : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 * 
 * Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
 * 
 * Find all the elements of [1, n] inclusive that do not appear in this array.
 * 
 * Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space. 
 * 
*/

/** Solution
 * Runtime 60 ms	MeMory 15.0 MB; 
 * faster than 100.00%, less than 50.00%
 * O(n) ; O(m)
*/

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
  static const int __ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
  }();
  
  for (int i=0;i<nums.size();i++) {
    int pos = nums[i]-1;
    if (pos != i && pos!=-1) {
      int tmp;
      do {
        tmp = nums[pos];
        nums[pos] = pos+1;
        nums[i] = 0;
        if (tmp == 0)  break;
        pos = tmp-1;
        nums[pos] = nums[pos] == 0 ? pos+1 : nums[pos];
      } while (pos != i && nums[pos] != 0 && nums[pos] != pos+1);
    }
  }

  std::vector<int> vec;
  for (int i=0;i<nums.size();i++) {
    if (nums[i] == 0) {
      vec.push_back(i+1);
    }
  }
  return vec;
}


