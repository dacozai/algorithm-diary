#include "test.h"
/** Question no 54. medium Spiral Matrix
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 15th, January, 2020
 * Source : https://leetcode.com/problems/spiral-matrix/
 * 
 * Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 9.4 MB; 
 * faster than 99.95%, less than 58.33% 
 * O(n) ; O(1)
*/

void moveZeroes(std::vector<int>& nums) {
  int pos = 0;
  for (int i=0; i<nums.size();i++){
    if (nums[i] != 0 ) {
      nums[pos] = nums[i];
      ++pos;
    }
  }
  for (; pos<nums.size();pos++)
    nums[pos] = 0;
}
