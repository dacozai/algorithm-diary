#include "test.h"
/** Question no 1375. medium Bulb Switcher III
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, March, 2020
 * Source : https://leetcode.com/problems/bulb-switcher-iii/
 * 
 * There is a room with n bulbs, numbered from 1 to n, arranged in a row from left to right. 
 * Initially, all the bulbs are turned off.
 * 
 * At moment k (for k from 0 to n - 1), we turn on the light[k] bulb. 
 * A bulb change color to blue only if it is on and all the previous bulbs (to the left) are turned on too.
 * 
 * Return the number of moments in which all turned on bulbs are blue.
 * 
*/

/** Solution
 * Runtime 20 ms	MeMory 12.9 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1) 
*/

int numTimesAllBlue(std::vector<int>& light) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int num = 0, ans=0;
  for (int i=0;i<light.size();i++) {
    num = std::max(num, light[i]);
    if (i+1 == num) ans++;
  }
  return ans;
}
