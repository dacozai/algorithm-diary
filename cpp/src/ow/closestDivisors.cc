#include "test.h"
/** Question 1362. medium Closest Divisors 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 23rd, February, 2020
 * Source : https://leetcode.com/problems/closest-divisors/
 * 
 * Given an integer num, find the closest two integers in absolute difference whose product equals num + 1 or num + 2.
 * 
 * Return the two integers in any order.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 8.3 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1) 
*/
std::vector<int> closestDivisors(int num) {
  std::vector<int> ans(2,0);
  
  for (int n=sqrt(num+2); n>=1;n--) {
    if ((num+1)%n == 0)
      return {n, (num+1)/n};
    if ((num+2)%n == 0)
      return {n, (num+2)/n};
  }
  return ans;
}
