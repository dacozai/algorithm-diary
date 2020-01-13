#include "test.h"
/** Question no 921. medium - Minimum Add to Make Parentheses Valid
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 13th, January, 2020 
 * Source : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
 * 
 * Given a string S of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', 
 * and in any positions ) so that the resulting parentheses string is valid.
 * 
 * Formally, a parentheses string is valid if and only if:
 * 
 * It is the empty string, or
 * It can be written as AB (A concatenated with B), where A and B are valid strings, or
 * It can be written as (A), where A is a valid string.
 * Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid. 
 * 
*/

/** Solution [NOT DONE]
 * Runtime 0 ms	MeMory 8.5 MB; 
 * faster than 100%, less than 80% 
 * O(n) ; O(1)
*/

int minAddToMakeValid(std::string S) {
  int v = 0, g = 0;
  for (char c: S) {
    if (c == '(') v++;
    else {
      if (v == 0) g++;
      else  v--;
    }
  }
  return v+g;
}
