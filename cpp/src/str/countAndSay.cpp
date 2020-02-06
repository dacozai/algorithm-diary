#include "test.h"
/** Question no 38. easy Count and Say
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 6th, February, 2020
 * Source : https://leetcode.com/problems/count-and-say/
 * 
 * The count-and-say sequence is the sequence of integers with the first five terms as following:
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 8.7 MB; 
 * faster than 78.55%, less than 88.89%
 * O(nm) ; O(n)
*/

std::string countAndSay(int n) {
  std::string st = "1";
  if (n == 1) return st;
  for (int i=1;i<n;i++) {
    std::string tmp = "";
    int ct = 1;
    char cur = st[0];
    for (int j=1;j<st.size();j++) {
      if (cur == st[j])  ct++;
      else {
        tmp += std::to_string(ct)+cur;
        ct=1;
        cur = st[j];
      }
    }
    tmp += std::to_string(ct)+cur;
    st = tmp;
  }
  
  return st;
}

