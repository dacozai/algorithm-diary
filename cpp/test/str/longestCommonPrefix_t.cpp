#include <iostream>
#include "test.h"
/** Testcases for Question number 14 
 * removeNthFromEnd
*/

void Test_longestCommonPrefix() {
  /* LeetCode Test 1 */
  std::vector<std::string > str_arr = {"flower","flow","flight"};
  std::string goal = "fl";
  assert(goal.compare(longestCommonPrefix(str_arr)) == 0);

  str_arr = {"dog","racecar","car"};
  goal = "";
  assert(goal.compare(longestCommonPrefix(str_arr)) == 0);

  /* Empty Test */
  str_arr = {};
  goal = "";
  assert(goal.compare(longestCommonPrefix(str_arr)) == 0);

  str_arr = {""};
  goal = "";
  assert(goal.compare(longestCommonPrefix(str_arr)) == 0);

  str_arr = {"", ""};
  goal = "";
  assert(goal.compare(longestCommonPrefix(str_arr)) == 0);

  return;
}