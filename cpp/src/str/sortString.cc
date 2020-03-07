#include "test.h"
/** Question no 1370. easy Increasing Decreasing String
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, March, 2020 
 * Source : https://leetcode.com/problems/increasing-decreasing-string/
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 8.8 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n^2) ; O(n)
*/

std::string sortString(std::string s) {
  std::vector<int> word_vec(26, 0);
  for (auto c: s) word_vec[c-'a']+=1;

  bool flag = true;
  std::string ans;

  while (ans.size() < s.size()) {
    int pos;
    for (int i=0;i<26;i++) {
      if(flag) pos = i;
      else pos = 25 - i;
      if (word_vec[pos]==0) continue;
      ans.push_back((int)'a'+pos);
      word_vec[pos]--;
    }
    flag = !flag;
  }
  return ans;
}
