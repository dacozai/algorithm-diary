#include <iostream>
#include "test.h"
/** Testcases for Question number 1309 
 * freqAlphabets
*/

void Test_freqAlphabets() {
  /* LeetCode Test */
  std::string input = "10#11#12";
  std::string goal  = "jkab";
  assert(goal == freqAlphabets(input));
  
  input = "1326#";
  goal  = "acz";
  assert(goal == freqAlphabets(input));

  input = "25#";
  goal  = "y";
  assert(goal == freqAlphabets(input));

  input = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
  goal  = "abcdefghijklmnopqrstuvwxyz";
  assert(goal == freqAlphabets(input));

  return;
}