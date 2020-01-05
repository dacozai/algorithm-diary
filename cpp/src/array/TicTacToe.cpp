#include "test.h"
/** Question no.121 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock),
 * design an algorithm to find the maximum profit. Note that you cannot sell a stock before you buy one. 
*/

/** BruteForce Solution
 * Runtime 828 ms	MeMory 9.4 MB; 
 * faster than 8.73%, less than 100.00% 
 * O(n^2) ; O(1)
*/
class TicTacToe {
private:
  int side;
  std::vector< std::vector<int> > board;
  bool checkWin(int role) {
    int ck = 0;
    for (int i=0;i<side;i++) 
      if (cursor(i,0,0,1,role)==side)
        return true;
    for (int i=0;i<side;i++) 
      if (cursor(0,i,1,0,role)==side)
        return true;
    if (cursor(0,0,1,1,role)==side)
        return true;
    if (cursor(0,side-1,1,-1,role)==side)
        return true;
    return false;
  }
  
  int cursor(int row, int col, int r_d, int c_d, int role) {
    int tmp=0;
    while (row < side && col < side) {
      if (board[row][col] == role)
        tmp++;
      else
        tmp=0;
      row+=r_d;
      col+=c_d;
    }
    return tmp;
  }
public:
    /** Initialize your data structure here. */
    TicTacToe(int n) {
      for (int i=0;i<n;i++){
        std::vector<int> tmp;
        for (int j=0;j<n;j++)
          tmp.push_back(0);
        board.push_back(tmp);
      }
      side = n;
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
      if(board[row][col] != 0)
        throw std::invalid_argument( "received invalid position" );
      board[row][col] = player;
      return checkWin(player)?player:0;
    }
};
