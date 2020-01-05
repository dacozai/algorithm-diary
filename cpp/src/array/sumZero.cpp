#include "test.h"
/** Question no 1304 easy - Find N Unique Integers Sum up to Zero.
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, January, 2019 
 * Source : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
 * Given an integer n, return any array containing n unique integers such that they add up to 0. 
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 8.6 MB; 
 * faster than 98.82%, less than 100% 
 * O(n) ; O(n)
*/

std::vector<int> sumZero(int n) {
  std::vector<int> ans;
  if(n%2==1) ans.push_back(0);
  int halfSize=n/2;
  for(int i=1;i<=halfSize;i++) {
    ans.push_back(i);
    ans.push_back(-i);
  }
  return ans;
}