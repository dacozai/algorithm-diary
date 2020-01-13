#include "test.h"
/** Question no.299 easy 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, January, 2020 
 * Source : https://leetcode.com/problems/bulls-and-cows/
 * You are playing the following Bulls and Cows game with your friend: 
 * You write down a number and ask your friend to guess what the number is. 
 * Each time your friend makes a guess, you provide a hint that indicates 
 * how many digits in said guess match your secret number exactly in both digit and 
 * position (called "bulls") and how many digits match the secret number but 
 * locate in the wrong position (called "cows"). Your friend will use successive guesses and 
 * hints to eventually derive the secret number.
 * 
 * Write a function to return a hint according to the secret number and friend's guess, 
 * use A to indicate the bulls and B to indicate the cows. 
 * 
 * Please note that both secret number and friend's guess may contain duplicate digits. 
 * 
*/

/** Solution
 * Runtime 0-4 ms	MeMory 8.8-8.9 MB; 
 * faster than 94.24-100%, less than 94.74-100% 
 * O(N) O(1)
*/
std::string getHint(std::string secret, std::string guess) {
  int m[10]={};
  int a=0, b=0;
  for (int i=0;i<secret.size();i++) {
    if (secret[i] == guess[i])
      a++;
    else
      m[(int)secret[i] - 48]++;
  }
  for (int i=0;i<guess.size();i++) {
    int pos = (int)guess[i]-48;
    if (guess[i] != secret[i] && m[pos]>0) {
      b++;
      m[pos]--;
    }
  }
  return std::to_string(a)+"A"+std::to_string(b)+"B";
}