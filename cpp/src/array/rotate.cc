#include "test.h"
/** Question no 48 medium Rotate Image
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, February, 2020
 * Source : https://leetcode.com/problems/rotate-image/
 * 
 * You are given an n x n 2D matrix representing an image.
 * 
 * Rotate the image by 90 degrees (clockwise).
 * 
 * Note:
 * You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
 * DO NOT allocate another 2D matrix and do the rotation.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 9 MB; 
 * faster than 100.00%, less than 85.37%
 * O(n^2) ; O(1) 
*/

void rotate(std::vector<std::vector<int>>& matrix) {
  int sz = matrix.size();
  
  for (int i=0; i<=(int)sz/2; i++){
    for (int j=i; j<sz-i-1; j++) {
      int tmp = matrix[i][j];
      matrix[i][j] = matrix[sz-1-j][i];
      matrix[sz-1-j][i] = matrix[sz-1-i][sz-1-j];
      matrix[sz-1-i][sz-1-j] = matrix[j][sz-1-i];
      matrix[j][sz-1-i] = tmp;
    }
  }
}
