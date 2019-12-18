#include <unordered_map>
#include <iostream>
#include "test.h"
/** Question no.1 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/two-sum/ 
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

/** Almost Solution
 * Runtime 4-12 ms	MeMory 10.4-10.6 MB; 
 * faster than 65.97% - 99.68%, less than 10.9% - 14.71% 
 * O(n) ; O(n)
*/
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mp;
    
    for (int i=0;i<nums.size();i++)
      mp[nums[i]] = i;
    
    for (int i=0;i<nums.size();i++) {
      int diff = target - nums[i];
      if (mp.count(diff) > 0  && mp[diff] != i && diff >= 0) {
        int arr[] = {mp[diff], i};
        std::vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
        return vec;
      } 
    }

    throw std::runtime_error("Err!!! It does not have solution.");  
  }