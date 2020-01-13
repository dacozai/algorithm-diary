#include "test.h"
/** Question no.12 medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, January, 2020 
 * Source : https://leetcode.com/problems/integer-to-roman/
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
 * 
 * Given an integer, convert it to a roman numeral. Input is guaranteed to be within the range from 1 to 3999.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 8.4 MB; 
 * faster than 94.24%, less than 94.74% 
 * O(N) O(1)
*/
std::string intToRoman(int num) {
  std::string ans="";
  if (num > 3999 || num < 1) return ans;
  runRome(&num, ans, 1000, "M");
  runRome(&num, ans, 900, "CM");
  runRome(&num, ans, 500, "D");
  runRome(&num, ans, 400, "CD");
  runRome(&num, ans, 100, "C");
  runRome(&num, ans, 90, "XC");
  runRome(&num, ans, 50, "L");
  runRome(&num, ans, 40, "XL");
  runRome(&num, ans, 10, "X");
  runRome(&num, ans, 9, "IX");
  runRome(&num, ans, 5, "V");
  runRome(&num, ans, 4, "IV");
  runRome(&num, ans, 1, "I");
  return ans;
}
void runRome(int *num, std::string& s, int n, std::string symbol) {
  while (*num>=n) {
    s.append(symbol);
    *num-=n;
  }
}