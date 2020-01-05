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
        board.push_back(vector<char>(n, ' '));
      side = n;
    }
    int move(int row, int col, int player) {
      char symbol = player==1?'X':'O';
      board[row][col] = symbol;
      return checkWin(symbol, row, col)?player:0;
    }
};