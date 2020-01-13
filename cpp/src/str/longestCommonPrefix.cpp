#include "test.h"
/** Question no.14 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 3rd, January, 2020 
 * Source : https://leetcode.com/problems/longest-common-prefix/
 * Write a function to find the longest common prefix string amongst an array of strings.
 * 
 * If there is no common prefix, return an empty string "". 
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8.8 MB; 
 * faster than 88.92%, less than 64.00% 
 * O (N) O(1)
*/
std::string longestCommonPrefix(std::vector<std::string>& strs) {
  if (strs.size() == 0) return "";
  std::string prefix = "";
  int i=0;
  while (same(strs, i)) {
    prefix+=strs[0][i];
    i++;
  }
  return prefix;
}

bool same(std::vector<std::string>& strs, int indx) {
  if (indx > strs[0].size())  return false;
  char ch = strs[0][indx];
  for (int i=1;i<strs.size();i++) 
    if (strs[i][indx] != ch || indx > strs[i].size())
      return false;
  return true;
}