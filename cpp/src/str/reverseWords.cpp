#include "test.h"
/** Question no.151 medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, January, 2019 
 * Source : https://leetcode.com/problems/reverse-words-in-a-string/
 *
 * Given an input string, reverse the string word by word. 
*/

/** Solution
 * Runtime 4-8 ms	MeMory 10.3 - 10.4 MB; 
 * faster than 98.22%, less than 70.77% 
 * O(n) ; O(n)
*/
std::string reverseWords(std::string s) {
  std::stack<std::string> stk;
  std::string tmp_str="";
  for (char c: s) {
    if (c != ' ')
      tmp_str+=c;
    else if (tmp_str.size()>0) {
      stk.push(tmp_str);
      tmp_str = "";
    }
  }
  if (stk.empty())  return tmp_str;
  if (tmp_str.size()>0) tmp_str += ' ';
  while (!stk.empty()) {
    tmp_str += stk.top();
    stk.pop();
    if (!stk.empty())
      tmp_str += ' ';
  }
  
  return tmp_str;
}

/** std::String Solution
 * Runtime 4-16 ms	MeMory 66.7 MB; 
 * faster than 98.22%, less than 10.77% 
 * O(n) ; O(n)
*/
std::string reverseWords_StrStyle(std::string s) {
  std::string ans = "";
  std::string tmp_str="";
  for (char c: s) {
    if (c != ' ')
      tmp_str+=c;
    else if (tmp_str.size()>0) {
      if (ans.size()>0)
        tmp_str += ' ' + ans;
      ans=tmp_str;
      tmp_str = "";
    }
  }
  if (ans.size()==0)  return tmp_str;
  else if (tmp_str.size()==0) return ans;
  return tmp_str + ' ' + ans;
}