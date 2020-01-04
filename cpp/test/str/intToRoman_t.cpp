
#include <iostream>
#include "test.h"
/** Testcases for Question number 12 
 * removeNthFromEnd
*/

void Test_intToRoman() {
  /* LeetCode Test */
  assert("III" == intToRoman(3));
  assert("IV" == intToRoman(4));

  /* Domain test */
  assert("" == intToRoman(0));
  assert("" == intToRoman(4000));

  /* max test */
  assert("MMMCMXCIX" == intToRoman(3999));

  std::cout << "It's over" << std::endl;
  return;
}