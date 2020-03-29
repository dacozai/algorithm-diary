#include "test.h"
#include <algorithm>
/** Question no 40. medium Combination Sum II
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, March, 2020
 * Source : https://leetcode.com/problems/combination-sum-ii/
 * 
 * Given a collection of candidate numbers (candidates) and a target number (target), 
 * find all unique combinations in candidates where the candidate numbers sums to target.
 * 
 * Each number in candidates may only be used once in the combination.
 * 
 * Note:
 * 
 * All numbers (including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8 MB; 
 * faster than 75.27%, less than 100.00%
 * O(n!) ; O(n^2) 
*/

class Solution {
public:
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort (candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> temp;
    bt(candidates, target, ans, temp, 0);
    return ans;
  }
  
  void bt (vector<int>& cand, int goal, vector<vector<int>>& ans, vector<int>& temp, int pos) {
    if (goal < 0) return;
    if (goal == 0) {
      ans.push_back(temp);
      return;
    }
    for (int i=pos;i<cand.size();i++) {
      if (i>pos && cand[i] == cand[i-1])  continue;
      temp.push_back(cand[i]);
      bt(cand, goal-cand[i], ans, temp, i+1);
      temp.pop_back();
    }
  }
};