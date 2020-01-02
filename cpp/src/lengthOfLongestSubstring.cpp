#include "test.h"
#include <set>
#include <unordered_map>
/** Question no.3 Medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 2nd, January, 2020 
 * Source : https://leetcode.com/problems/fizz-buzz/
 * Given a string, find the length of the longest substring without repeating characters.
 * 
*/

/** Solution
 * FAILED, time exceeds limitation
 * O(N^3) O(1)
*/

int lengthOfLongestSubstring_BruteForce(std::string s) {
  int max_num = 0;
  
  for (int l=1;l<=s.size();l++) {
    for (int pos=0;pos<=s.size()-l;pos++) {
      if (max_num>=l)
        break;
      std::set<char> tmp;
      for (int j=0;j<l;j++) {
        if (tmp.find(s[pos+j]) == tmp.end())
          tmp.insert(s[pos+j]);
        else 
          break;
      }
      if (tmp.size() > max_num)
        max_num = tmp.size();
    }
  }
  
  return max_num;
}

/** Solution
 * Runtime 12 ms	MeMory 10.9 MB; 
 * faster than 83.3%, less than 57.21% 
 * O(N) O(N)
*/

int lengthOfLongestSubstring(std::string s) {
  int max_num = 0;
  std::unordered_map<char, int> map;
  
  for (int j=0, i=0; j<s.size();j++) {
    if (map.find(s[j]) != map.end())
      i = std::max(map[s[j]], i);
    max_num = std::max(max_num, j-i+1);
    map[s[j]] = j+1;
  }
  
  return max_num;
}