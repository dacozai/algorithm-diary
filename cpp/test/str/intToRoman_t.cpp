
#include <iostream>
#include "test.h"
/** Testcases for Question number 12 
 * removeNthFromEnd
*/

void Test_intToRoman() {
  /* LeetCode Test */
  assert("III" == intToRoman(3));
  assert("IV" == intToRoman(4));
  assert("IX" == intToRoman(9));
  assert("LVIII" == intToRoman(58));
  assert("MCMXCIV" == intToRoman(1994));

  /* Domain test */
  assert("" == intToRoman(0));
  assert("" == intToRoman(4000));

  /* max test */
  assert("MMMCMXCIX" == intToRoman(3999));
  return;
}