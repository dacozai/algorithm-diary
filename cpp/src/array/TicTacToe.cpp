#include "test.h"
/** Question no.348 medium - Design Tic-Tac-Toe
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, January, 2020
 * Source : https://leetcode.com/problems/design-tic-tac-toe/
 * Design a Tic-tac-toe game that is played between two players on a n x n grid.
 * 
 * You may assume the following rules:
 * 
 * A move is guaranteed to be valid and is placed on an empty block.
 * Once a winning condition is reached, no more moves is allowed.
 * A player who succeeds in placing n of their marks in a horizontal, vertical, or diagonal row wins the game.
*/

/** BruteForce Solution
 * Runtime 20-36 ms	MeMory 20-20.1 MB; 
 * faster than 99.90%, less than 100.00% 
 * O(n) ; O(n)
 * Test 1. I have examined that in line 31, if we use while, it is the same.
 * test 2. I tried to use double pointer instead of vector. The memory cost and speed still stay the same!
*/
class TicTacToe {
private:
  int side;
  std::vector< std::vector<char> > board;
  bool checkWin(char symbol, int row, int col) {
    return isConnected(row,0,0,1,symbol) || isConnected(0,col,1,0,symbol) ||\
            isConnected(0,0,1,1,symbol) || isConnected(0,side-1,1,-1,symbol);
  }
  bool isConnected(int row, int col, int r_d, int c_d, char symbol) {
    for (;row < side && col < side;row+=r_d, col+=c_d)
      if (board[row][col] != symbol)
        return false;
    return true;
  }
public:
    TicTacToe(int n) {
      for(int i=0; i<n; i++)
        board.push_back(std::vector<char>(n, ' '));
      side = n;
    }
    int move(int row, int col, int player) {
      char symbol = player==1?'X':'O';
      board[row][col] = symbol;
      return checkWin(symbol, row, col)?player:0;
    }
};