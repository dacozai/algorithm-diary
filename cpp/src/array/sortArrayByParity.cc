#include "test.h"
/** Question no 905 easy Sort Array By Parity
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 16th, March, 2020
 * Source : https://leetcode.com/problems/sort-array-by-parity/
 * 
 * Given an array A of non-negative integers, return an array consisting of all the even elements of A, 
 * followed by all the odd elements of A.
 * 
 * You may return any answer array that satisfies this condition.
 * 
*/

/** Solution
 * Runtime 24 ms	MeMory 8.7 MB; 
 * faster than 96.45%, less than 100.00%
 * O(n) ; O(1) 
*/

std::vector<int> sortArrayByParity(std::vector<int>& A) {
  int L = 0 , R = A.size()-1;
  while (L<R) {
    if (A[L]%2 == 1) {
      while (A[R]%2==1 && L<R) R--;
      int tmp = A[L];
      A[L] = A[R];
      A[R] = tmp;
    }
    L++;
  }
  return A;
}
