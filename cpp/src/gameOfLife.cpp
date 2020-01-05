#include "test.h"
/** Question no.289 medium - Game of Life
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, January, 2019 
 * Source : https://leetcode.com/problems/game-of-life/
 * Given a board with m by n cells, each cell has an initial state live (1) or dead (0). 
 * Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using 
 * the following four rules (taken from the above Wikipedia article):
 *   Any live cell with fewer than two live neighbors dies, as if caused by under-population.
 *   Any live cell with two or three live neighbors lives on to the next generation.
 *   Any live cell with more than three live neighbors dies, as if by over-population..
 *   Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
*/

/** Solution
 * Runtime 0-4 ms	MeMory 8.7 MB; 
 * faster than 100.00%, less than 78.57% 
 * O(mn) ; O(1)
*/

class Solution {
private:
	std::vector<std::vector<int>> neighbor{{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
  
  int ruleCheck(std::vector<std::vector<int>>& board, int i, int j) {
    int r, c, tip=0;
    for (int k=0;k<neighbor.size();k++) {
      r = i+neighbor[k][0];
      c = j+neighbor[k][1];
      if (safeCheck(r, c, board.size(), board[0].size()))
        if (board[r][c]==1 || board[r][c]==2)
          tip++;
    }
    return tip;
  }
  
  bool safeCheck(int i, int j, int RLEN, int CLEN) {
    return (i>=0 && i<RLEN && j>=0 && j<CLEN);
  }
public:
  void gameOfLife(std::vector<std::vector<int>>& board) {
    for (int i=0;i<board.size();i++) {
      for (int j=0;j<board[i].size();j++) {
        int chkNum = ruleCheck(board, i, j);
        if (board[i][j]==1) {
          if (chkNum < 2 || chkNum>3)
            board[i][j] = 2;
        } else
          if (chkNum==3)
            board[i][j] = 3;
      }
    }
    
    for (int i=0;i<board.size();i++) {
      for (int j=0;j<board[i].size();j++) {
        if (board[i][j]>1)
          board[i][j]-= 2;
      }
    }
  }
};