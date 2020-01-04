#include "test.h"
/** Question no.299 medium
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, January, 2019 
 * Source : https://leetcode.com/problems/bulls-and-cows/
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
string getHint(std::string secret, std::string guess) {
  int m[10]={};
  int a=0, b=0;
  for (int i=0;i<secret.size();i++) {
    if (secret[i] == guess[i])
      a++;
    else
      m[(int)secret[i] - 48]++;
  }
  for (int i=0;i<guess.size();i++) {
    int pos = (int)guess[i]-48;
    if (guess[i] != secret[i] && m[pos]>0) {
      b++;
      m[pos]--;
    }
  }
  return std::to_string(a)+"A"+std::to_string(b)+"B";
}