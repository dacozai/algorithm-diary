#include "test.h"
/** Question no 393. medium UTF-8 Validation 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 10th, February, 2020
 * Source : https://leetcode.com/problems/utf-8-validation/
 * 
 * A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:
 * 
 * For 1-byte character, the first bit is a 0, followed by its unicode code.
 * For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, 
 * followed by n-1 bytes with most significant 2 bits being 10.)
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 9.5 MB; 
 * faster than 100.00%, less than 87.50%
 * O(n) ; O(m) 
*/

bool validUtf8(vector<int>& data) {
  if (data.size() == 0) return false;
  
  int utfNum=0;
  for (int i=0;i<data.size();i++) {
    std::string tmpStr;
    numToStr(tmpStr, data[i]);
    
    if (utfNum == 0) {
      // count 1s
      for (int k=0;k<UTF_LEN;k++) {
        if (tmpStr[k] == '0') break;
        utfNum++;
      }
      // character
      if (utfNum == 0)  continue;
      // not utf8
      if (utfNum > 4 || utfNum == 1)  return false;
    } else {
      if (tmpStr.substr(0,2) != "10") return false;
    }
    utfNum--;
  }
  
  return utfNum == 0;
}

void numToStr(string& s, int num) {
  s = "00000000";
  // convert to binary  
  for (int k=UTF_LEN-1; k>=0 && num>0;k--) {
    s[k] = num%2==0 ? '0' : '1';
    num >>= 1;
  }
}

