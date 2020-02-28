i#include "test.h"
/** Question no 500. easy Keyboard Row
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 28th, February, 2020
 * Source : https://leetcode.com/problems/keyboard-row/
 * 
 * Given a List of words, return the words that can be typed using letters of alphabet on only one row's 
 * of American keyboard like the image below.
 * 
*/

/** Solution
 * Runtime ? ms	MeMory ? MB; 
 * faster than 99.72%, less than 100.00%
 * O(n^2) ; O(1) 
*/
class Solution {
private:
  unordered_map<char, int> myDict = {
    {'Q',0},{'W',0},{'E',0},{'R',0},{'T',0},{'Y',0},{'U',0},{'I',0},{'O',0},{'P',0},
    {'q',0},{'w',0},{'e',0},{'r',0},{'t',0},{'y',0},{'u',0},{'i',0},{'o',0},{'p',0},
    {'A',1},{'S',1},{'D',1},{'F',1},{'G',1},{'H',1},{'J',1},{'K',1},{'L',1},
    {'a',1},{'s',1},{'d',1},{'f',1},{'g',1},{'h',1},{'j',1},{'k',1},{'l',1},
    {'Z',2},{'X',2},{'C',2},{'V',2},{'B',2},{'N',2},{'M',2},
    {'z',2},{'x',2},{'c',2},{'v',2},{'b',2},{'n',2},{'m',2}
  };
public:
  vector<string> findWords(vector<string>& words) {
    vector<string> vec;
    for (auto s: words) {
      int pos = myDict[s[0]];
      bool flag = true;
      for (int i=1;i<s.size();i++) {
        if (pos != myDict[s[i]]) {
          flag = false;
          break;
        }
        flag = true;
      }
      
      if (flag) vec.push_back(s);
    }
    
    return vec;
  }
};
