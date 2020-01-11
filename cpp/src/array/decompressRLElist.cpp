#include "test.h"
/** Question 1313 medium - Decompress Run-Length Encoded List
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, January, 2019 
 * Source : https://leetcode.com/problems/decompress-run-length-encoded-list/
 * 
 * We are given a list nums of integers representing a list compressed with run-length encoding.
 * 
 * Consider each adjacent pair of elements [a, b] = [nums[2*i], nums[2*i+1]] (with i >= 0).  
 * For each such pair, there are a elements with value b in the decompressed list.
 * 
 * Return the decompressed list. 
 * 
*/

/** Solution
 * Runtime 44 ms	MeMory 10.7 MB; 
 * faster than 100%, less than 100% 
 * O(n) ; O(1)
*/

vector<int> decompressRLElist(vector<int>& nums) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  std::vector<int> vec;
  for (int i=0; i<nums.size()/2; i++)
    for (int j=0;j<nums[2*i];j++)
      vec.push_back(nums[2*i+1]);
  return vec;
}