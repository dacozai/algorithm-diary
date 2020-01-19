#include "test.h"
/** Question no 1323. easy - Maximum 69 Number
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 19th, January, 2020
 * Source : https://leetcode.com/problems/maximum-69-number/
 * 
 * Given a positive integer num consisting only of digits 6 and 9.
 * 
 * Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.6 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int maximum69Number (int num) {
  std::string numStr = std::to_string(num);
  for (int i=0; i < numStr.size(); i++) {
    if (numStr[i] == '6') {
      numStr[i] = '9';
      return std::stoi(numStr);
    }
  }
  return num;
}


