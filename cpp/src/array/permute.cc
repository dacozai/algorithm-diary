#include "test.h"
/** Question no 46 medium Permutations
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 10th, April, 2020
 * Source : https://leetcode.com/problems/permutations/
 * 
 * Given a collection of distinct integers, return all possible permutations.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 6.7 MB; 
 * faster than 98.27%, less than 100.00%
 * O(n n!) ; O(n!) 
*/

class Solution {
public:
  vector<vector<int>> permute(vector<int>& nums) {
    std::vector<std::vector<int>> ans;
    std::vector<int> vec = nums;
    bt(vec, ans, 0, nums.size());
    return ans;
  }
  
  void bt(vector<int>& nums, vector<vector<int>>& ans, int pos, int sz) {
    if (pos == sz)  ans.push_back(nums);
    for (int i=pos; i< sz; i++) {
      int tmp = nums[pos];
      nums[pos] = nums[i];
      nums[i] = tmp;
      
      bt(nums, ans, pos+1, sz);
      
      tmp = nums[pos];
      nums[pos] = nums[i];
      nums[i] = tmp;
    }
  }
};
