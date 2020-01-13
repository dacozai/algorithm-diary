#include "test.h"
/** Question no 54. medium Spiral Matrix
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 10th, January, 2020
 * Source : https://leetcode.com/problems/spiral-matrix/
 * 
 * Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
 * 
*/

/** Solution [NOT DONE]
 * Runtime 4 ms	MeMory 8.6 MB; 
 * faster than 98.82%, less than 100% 
 * O(n) ; O(n)
*/

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int delta[4][2] = {{0,1}, {1,0}, {0,-1},{-1,0}};
  std::vector<int> v;
  int *p = new int[2];
  int R_L = matrix.size();
  if (R_L == 0) return v;
  int C_L = matrix[0].size();
  int R_B = 0, C_B = 0;
  p[0] = R_L/2; 
  p[1] = C_L/2;
  int i=0,j=0, k=0;
  while(i!=p[0] || j!=p[1]) {
    // cout << i << " and " << j << endl;
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
  }
  
  v.push_back(matrix[i][j]);
  
  return v;
}