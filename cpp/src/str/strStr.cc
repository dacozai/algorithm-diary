#include "test.h"
/** Question no 28 easy Implement strStr()
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, February, 2020
 * Source : https://leetcode.com/problems/implement-strstr/
 * 
 * Implement strStr().
 * 
 * Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9.2 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int strStr(std::string haystack, std::string needle) {
  if (needle.size() == 0) return 0;
  for (int i=0;i<haystack.size();i++) {
    if (haystack[i] == needle[0] && haystack.size()-i>=needle.size()) {
      int ct = 0;
      for (int j=0; j<needle.size();j++) {
        if (haystack[j+i] == needle[j]) ct++;
      }
      if (ct == needle.size())  return i;
    }
  }
  return -1;
}
