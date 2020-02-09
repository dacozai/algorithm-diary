#include "test.h"
/** Question no 200 medium Number of Islands
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 9th, February, 2020
 * Source : https://leetcode.com/problems/number-of-islands/
 * 
 * Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. 
 * An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
 * You may assume all four edges of the grid are all surrounded by water.
 * 
*/

/** Solution (dfs)
 * Runtime 8 ms	MeMory 10.8 MB; 
 * faster than 99.15%, less than 80.9%
 * O(r*c) ; O(r*c) 
*/

class Solution {
private:
  int row, col;
public:

  
  int numIslands_dfs(std::vector<std::vector<char>>& grid) {
    this->row = grid.size();
    if (this->row == 0) return 0;
    this->col = grid[0].size();
    if (this->col == 0) return 0;
    int ans = 0;
    for (int i=0; i<this->row; i++) {
      for (int j=0; j<this->col; j++) {
        if (grid[i][j] == '1') {
          ans++;
          dfs(grid, i-1, j  );
          dfs(grid, i  , j-1);
          dfs(grid, i  , j+1);
          dfs(grid, i+1, j  );
        }
      }
    }
    
    return ans;
  }
  
  bool canNotMove_dfs(int r, int c) {
    if (r<0 || r>=this->row)  return true;
    if (c<0 || c>=this->col)  return true;
    return false;
  }
  
  void dfs(vector<vector<char>>& grid, int r, int c) {
    if (canNotMove_dfs(r,c))  return;
    if (grid[r][c] == '0') return;
    grid[r][c] = '0';
    dfs(grid, r-1, c  );
    dfs(grid, r  , c-1);
    dfs(grid, r  , c+1);
    dfs(grid, r+1, c  );
  }
  
};


