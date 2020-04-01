#include "test.h"
/** Question 168 easy Excel Sheet Column Title
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, April, 2020
 * Source : https://leetcode.com/problems/excel-sheet-column-title/
 * 
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 6.2 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1) 
*/
std::string convertToTitle(int n) {
  stack<int> stk;
  while (n>0) {
    int tmp = n%ALPHA;
    if (tmp==0) tmp = 26;
    stk.push(tmp);
    cout << tmp << endl;
    n = (n-tmp)/ALPHA;
  }
  string ans = "";
  
  while (!stk.empty()) {
    auto letter = stk.top();
    stk.pop();
    ans += (char) ( letter - 1 + (int)'A');
  }
  return ans;
}
