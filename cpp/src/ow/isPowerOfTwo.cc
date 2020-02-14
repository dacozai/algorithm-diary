#include "test.h"
/** Question no 231 easy Power of Two
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 14th, February, 2020
 * Source : https://leetcode.com/problems/power-of-two/
 * 
 * Given an integer, write a function to determine if it is a power of two.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.0 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1) 
*/
bool isPowerOfTwo(int n) {
  if (n <= 0) return false;
  while (n%2 !=1) {
    n/=2;
  }
  return n==1;
}
