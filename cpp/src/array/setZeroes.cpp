#include "test.h"
/** Question no.73 medium - Set Matrix Zeroes
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 6th, January, 2019 
 * Source : https://leetcode.com/problems/set-matrix-zeroes/
 * 
 * Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.
 * 
*/

/** BruteForce Solution
 * Runtime 36-44 ms	MeMory 11.4-11.7 MB; 
 * faster than 99.88%, less than 96.3% 
 * O(n) ; O(n)
*/
class Solution {
private:
  unordered_set<int> rowSet;
  unordered_set<int> colSet;
public:
  void setZeroes(vector<vector<int>>& matrix) {
    int RLEN = matrix.size(), CLEN = matrix[0].size();
    for (int i=0;i<RLEN;i++) {
      for (int j=0;j<CLEN;j++) {
        if (matrix[i][j] == 0) {
          rowSet.insert(i);
          colSet.insert(j);
        }
      }
    }
    for (auto elem: rowSet)
      removeRow(matrix, elem, 0, false, RLEN, CLEN);
    for (auto elem: colSet)
      removeRow(matrix, 0, elem, true, RLEN, CLEN);
  }
  
  void removeRow(vector<vector<int>>& mat, int posX, int posY, bool C_flag, int xLen, int yLen) {
    vector<int> dd {0,1};
    if (C_flag) dd = {1,0};
    for (; posX<xLen && posY<yLen;posX+=dd[0],posY+=dd[1])
      mat[posX][posY] = 0;
  }
};