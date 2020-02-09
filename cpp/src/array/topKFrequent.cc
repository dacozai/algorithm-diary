#include "test.h"
/** Question no 347 medium Top K Frequent Elements
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 9th, February, 2020
 * Source : https://leetcode.com/problems/top-k-frequent-elements/
 * 
 * Given a non-empty array of integers, return the k most frequent elements.
 * 
 * Note:
 * You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
 * Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 11.5 MB; 
 * faster than 99.98%, less than 67.74%
 * O(n) ; O(1) 
*/
const static int caoy = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
  std::unordered_map<int, int> mp;
  for (auto em: nums) {
    mp[em]++;
  }
  std::map<int, std::vector<int>> or_mp;
  for (auto e: mp) {
    or_mp[e.second].push_back(e.first);
  }
  
  std::vector<int> vec;
  int i=0;
  for (auto rit = or_mp.rbegin(); rit != or_mp.rend(); rit++) {
    for (auto em: rit->second) {
      vec.push_back(em);
      i++;
      if (i==k) return vec;
    }
  }
  throw("Problem happened!");
}




