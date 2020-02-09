#include "test.h"
/** Question no 695 medium Max Area of Island 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 9th, February, 2020
 * Source : https://leetcode.com/problems/max-area-of-island/
 * 
 * Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) 
 * connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.
 * 
 * Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)
 * 
*/

/** Solution (dfs)
 * Runtime 12 ms	MeMory 10.3 MB; 
 * faster than 91.97%, less than 100.00%
 * O(r*c) ; O(r*c) 
*/

class Solution {
private:
  int row, col;
public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    this->row = grid.size();
    if (!this->row) return 0;
    this->col = grid[0].size();
    
    int maxArea = 0;
    for (int i=0;i<this->row;i++) {
      for (int j=0;j<this->col;j++) {
        if (grid[i][j] == 1) {
          int aa = dfs(grid, i, j);
          maxArea = std::max(maxArea, aa);
        }
      }
    }
    return maxArea;
  }
  
  int dfs(vector<vector<int>>& grid, int r, int c) {
    if (outOfBound(r,c))  return 0;
    if (grid[r][c] == 0)  return 0;
    grid[r][c] = 0;
    return 1+dfs(grid,r-1,c)+dfs(grid,r+1,c)
            +dfs(grid,r,c-1)+dfs(grid,r,c+1);
  }
  
  bool outOfBound(int r, int c) {
    if (r<0 || this->row-1<r)  return true;
    if (c<0 || this->col-1<c)  return true;
    return false;
  }
};
