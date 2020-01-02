#include "test.h"
#include <cstring>
#include <set>
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