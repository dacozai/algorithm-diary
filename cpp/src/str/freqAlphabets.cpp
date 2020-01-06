#include "test.h"
/** Question no.1309 easy - Decrypt String from Alphabet to Integer Mapping
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 6th, January, 2019 
 * Source : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
 * 
 * Given a string s formed by digits ('0' - '9') and '#' . We want to map s to English lowercase characters as follows:
 * 
 * Characters ('a' to 'i') are represented by ('1' to '9') respectively.
 * Characters ('j' to 'z') are represented by ('10#' to '26#') respectively. 
 * Return the string formed after mapping.
 * 
 * It's guaranteed that a unique mapping will always exist.
 * 
*/

/** BruteForce Solution
 * Runtime 0-4 ms	MeMory 8.5 MB; 
 * faster than 100.00%, less than 100.0% 
 * O(n) ; O(1)
*/
std::string freqAlphabets(std::string s) {
  std::string ans = "";
  std::string tmp = "";
  for (char c: s) {
    if (c == '#') {
      ans += (char) atoi(tmp.c_str()) + 96; 
      tmp = "";
    } else if (tmp.size()==2){
      ans+=(char) ((int)tmp[0]+48);
      tmp[0] = tmp[1];
      tmp[1] = c;
    } else
      tmp += c;
  }
  if (tmp.size()>0)
    for (char c:tmp)
      ans+=(char) ((int)c+48);
    
  return ans;
}