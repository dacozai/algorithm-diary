#include "test.h"
/** Question no 977. easy Squares of a Sorted Array
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, February, 2020
 * Source : https://leetcode.com/problems/squares-of-a-sorted-array/
 * 
 * Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, 
 * also in sorted non-decreasing order.
 * 
*/

/** Solution
 * Runtime 100 ms	MeMory 13.4 MB; 
 * faster than 87.18%, less than 86.49% 
 * O(n) ; O(n)
*/

std::vector<int> sortedSquares(std::vector<int>& A) {
  int left = 0, right = A.size()-1, pos = A.size()-1;
  std::vector<int> vec(A.size());
  while (pos>=0) {
    if (std::abs(A[left]) > std::abs(A[right])) {
      vec[pos] = A[left]*A[left];
      left++;
    } else {
      vec[pos] = A[right]*A[right];
      right--;
    }
    pos--;
  }
  return vec;
}
