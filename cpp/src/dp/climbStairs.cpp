#include "test.h"
/** Question no.70 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, December, 2019 
 * Source : https://leetcode.com/problems/climbing-stairs/
 * You are climbing a stair case. It takes n steps to reach to the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 * Note: Given n will be a positive integer.
 * 
*/

/** Solution
 * Runtime 0-4 ms	MeMory 8.2 MB; 
 * faster than 100%, less than 97.06% 
 * O(N) O(1)
*/
int climbStairs(int n) {
  int arr[2] = {1,2};
  for (int ct=3;ct<=n;ct++) {
    arr[(ct-1)%2] = arr[0] + arr[1];
  }
  return arr[(n-1)%2];
}