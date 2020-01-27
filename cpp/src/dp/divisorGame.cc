#include "test.h"
/** Question no 1025. easy Divisor Game
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, January, 2020
 * Source : https://leetcode.com/problems/divisor-game/
 * 
 * Alice and Bob take turns playing a game, with Alice starting first.
 * 
 * Initially, there is a number N on the chalkboard.  On each player's turn, that player makes a move consisting of:
 * 
 * Choosing any x with 0 < x < N and N % x == 0.
 * Replacing the number N on the chalkboard with N - x.
 * Also, if a player cannot make a move, they lose the game.
 * 
 * Return True if and only if Alice wins the game, assuming both players play optimally.
 * 
*/

/** Solution (Dynamic Programming)
 * Runtime 0 ms	MeMory 8 MB; 
 * faster than 100.00%, less than 100% 
 * O(n) ; O(1)
*/

bool divisorGame(int N) {
  int i = 0, x;
  while (N>1) {
    for (x = 1; x<N; x++) {
      if (N%x == 0) {
        ++i;
        break;
      }
    }
    N-= x;
  }
  return i%2==1;
}
