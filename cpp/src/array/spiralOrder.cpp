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
 * Runtime 0 ms	MeMory 8.5 MB; 
 * faster than 100.00%, less than 100% 
 * O(n) ; O(n)
*/

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
  int delta[4][2] = {{0,1}, {1,0}, {0,-1},{-1,0}};
  std::vector<int> v;
  int R_L = matrix.size();
  if (R_L == 0) return v;
  int C_L = matrix[0].size();
  int R_B = 0, C_B = 0, CELLS = R_L*C_L;
  int i=0,j=0,k=0, add_up=0;
  
  while(add_up < CELLS) {
    v.push_back(matrix[i][j]);
    if (i+delta[k%4][0] >= R_L) {
      C_L--;
      k++;
    } else if (j+delta[k%4][1] >= C_L) {
      R_B++;
      k++;
    } else if (i+delta[k%4][0]<R_B) {
      C_B++;
      k++;
    } else if (j+delta[k%4][1] <C_B) {
      R_L--;
      k++;
    }
    
    i+=delta[k%4][0];
    j+=delta[k%4][1];
    add_up++;
  }
    
  return v;
}