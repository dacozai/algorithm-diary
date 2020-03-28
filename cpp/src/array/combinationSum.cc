#include "test.h"
#include <algorithm>
/** Question no 39. medium Combination Sum
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 28th, March, 2020
 * Source : https://leetcode.com/problems/combination-sum/
 * 
 * Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), 
 * find all unique combinations in candidates where the candidate numbers sums to target.
 * 
 * The same repeated number may be chosen from candidates unlimited number of times.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8 MB; 
 * faster than 75.27%, less than 100.00%
 * O(n!) ; O(n^2) 
*/

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
  std::sort(candidates.begin(), candidates.end());
  std::vector<std::vector<int>> ans;
  std::vector<int> list;

  bt(candidates, ans, target, 0, list);
  return ans;
}

void bt(std::vector<int>& cand, std::vector<std::vector<int>>& ans, int target, int pos, std::vector<int>& list) {
  if (target < 0) return;
  if (target == 0) {
    ans.push_back(list);
    return;
  }
  
  for (int i=pos; i<cand.size(); i++) {
    list.push_back(cand[i]);
    bt(cand, ans, target-cand[i], i,list);
    list.pop_back();
  }
}