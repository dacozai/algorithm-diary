#include "test.h"
/** Question no 1260. easy - Shift 2D Grid
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, January, 2020
 * Source : https://leetcode.com/problems/shift-2d-grid/
 * 
 * Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.
 * 
 * In one shift operation:
 * 
 * Element at grid[i][j] moves to grid[i][j + 1].
 * Element at grid[i][n - 1] moves to grid[i + 1][0].
 * Element at grid[m - 1][n - 1] moves to grid[0][0].
 * Return the 2D grid after applying shift operation k times.
 * 
*/

/** Solution
 * Runtime 56 ms	MeMory 15.2 MB; 
 * faster than 99.27%, less than 100.00% 
 * O(n) ; O(1)
*/

std::vector<std::vector<int>> shiftGrid(std::vector<std::vector<int>>& grid, int k) {
  static const int __ = []() {
      std::ios::sync_with_stdio(false);
      std::cin.tie(nullptr);
      std::cout.tie(nullptr);
      return 0;
  }();
  std::vector<std::vector<int>> mut;
  int ROW = grid.size(), COL = grid[0].size();
  int dx = (int)std::floor(k/COL)%ROW, dy = k%COL;
  
  for (int i=0; i<ROW; i++) {
    std::vector<int> vec;
    for (int j=0; j<COL; j++) {
      int x = i + ROW - 1 - dx;
      int y = j + COL - dy;
      if (y >= COL) {
        x ++;
        y -= COL;
      }
      x%=ROW;
      vec.push_back(grid[x][y]);
    }
    mut.push_back(vec);
  }
  
  return mut;
}