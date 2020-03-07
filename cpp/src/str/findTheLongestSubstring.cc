#include "test.h"
/** Question no 1371 medium Find the Longest Substring Containing Vowels in Even Counts
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, March, 2020 
 * Source : https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/
 * 
 * Given the string s, return the size of the longest substring containing each vowel an even number of times. 
 * That is, 'a', 'e', 'i', 'o', and 'u' must appear an even number of times.
 * 
*/

/** Solution
 * Runtime 788 ms	MeMory 198 MB; 
 * faster than 9.09%, less than 100.00%
 * O(n^2) ; O(n)
*/

int findTheLongestSubstring(std::string s) {
  int ans = s.size();
  
  while(ans>=0) {
    for (int i=0;i<=s.size()-ans;i++) {
      if (chk(s, i, ans)) return ans;
    }
    ans--;
  }
  
  return ans;
}

bool chk(std::string s, int st, int len) {
  std::vector<int> vowels = {'a'-'a', 'e'-'a', 'i'-'a', 'o'-'a', 'u'-'a'};
  std::vector<int> dict(26, 0);
  for (int i=0; i<len && st+i<s.size(); i++) {
    dict[(int)s[st+i] - (int)'a']++;
  }
  for (auto v: vowels) if (dict[v]%2 != 0)  return false;
  return true;
}
