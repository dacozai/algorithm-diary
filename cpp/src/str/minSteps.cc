#include "test.h"
/** Question no 1347. um  Number of Steps to Make Two Strings Anagram
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, February, 2020
 * Source : https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
 * 
 * Given two equal-size strings s and t. In one step you can choose any character of t and 
 * replace it with another character.
 * 
 * Return the minimum number of steps to make t an anagram of s.
 * 
 * An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 19.1 MB; 
 * faster than 99.46%, less than 100.00%
 * O(n) ; O(1)
*/

int minSteps(string s, string t) {
  vector<int> vec(128, 0);
  int ans = 0;
  
  for (int i=0;i<s.size();i++) {
    vec[s[i]]++;
    vec[t[i]]--;
  }
  
  for (auto elem: vec) {
    ans+=elem>0?elem:0;
  }
  return ans;
}