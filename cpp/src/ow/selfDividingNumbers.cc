#include "test.h"
/** Question no 728 easy Self Dividing Numbers
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 20th, March, 2020 
 * Source : 
 * 
 * A self-dividing number is a number that is divisible by every digit it contains.
 * 
 * For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
 * 
 * Also, a self-dividing number is not allowed to contain the digit zero.
 * 
 * Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.
 * 
 * 
*/

std::vector<int> selfDividingNumbers(int left, int right) {
  std::vector<int> vec;
  for (;left<=right;left++) {
    if (selfDiv(left))  vec.push_back(left);
  }
  return vec;
}

bool selfDiv(int num) {
  int tmp = num, digits=0, ct=0;
  while (tmp>0) {
    int divisor = tmp%10;
    if (divisor == 0) return false;
    if (num%divisor == 0)  ct++;
    digits++;
    tmp/=10;
  }
  return digits==ct;
}

