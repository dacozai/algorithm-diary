#include <iostream>
#include "test.h"
/** Testcases for Question number 2 
 * removeNthFromEnd
*/

void Test_lengthOfLongestSubstring() {
  /* LeetCode Test 1 */
  std::string s = "abcabcabcabc";
  int goal = 3;
  assert(lengthOfLongestSubstring(s) == goal);

  /* Empty Test*/
  s = "";
  goal = 0;
  assert(lengthOfLongestSubstring(s) == goal);

  s = "au";
  goal = 2;
  assert(lengthOfLongestSubstring(s) == goal);

  s = "bbbbb";
  goal = 1;
  assert(lengthOfLongestSubstring(s) == goal);

  s="pwwkew";
  goal = 3;
  assert(lengthOfLongestSubstring(s) == goal);

  return;
}