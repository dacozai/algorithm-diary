#include "test.h"
/** Question no 221. medium Maximal Square
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, January, 2019 
 * Source : https://leetcode.com/problems/maximal-square/
 * 
 * Given a 2D binary matrix filled with 0's and 1's, 
 * find the largest square containing only 1's and return its area. 
 * 
*/

/** Solution [NOT DONE]
 * Runtime 108 ms	MeMory 10.5 MB; 
 * faster than 5.30%, less than 92.59% 
 * O(n^2) ; O(1)
*/

int maximalSquare(std::vector<std::vector<char>>& matrix) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  if (matrix.size() == 0 )  return 0;
  int area = 0, sz = min(matrix.size(), matrix[0].size());
  
  for (;sz>0;sz--) {
    for (int i=0;i<matrix.size()-sz+1;i++){
      for (int j=0;j<matrix[0].size()-sz+1;j++) {
        if (chk(matrix, sz, i, j)) {
          int tmp = sz*sz;
          if (tmp < area) return area;
          area = tmp;
        }
      }
    }
  }
  return area;
}

bool chk(std::vector<std::vector<char>>& mat, int sz, int x, int y) {
  int i,j;
  for (i=0;i<sz;i++)
    for (j=0; j<sz; j++)
      if (mat[x+i][y+j] != '1') return false;
  return true;
}
