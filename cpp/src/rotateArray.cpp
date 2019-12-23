#include "test.h"
/** Question no.26 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/rotate-array/
 * Given an array, rotate the array to the right by k steps, where k is non-negative.
 * 
*/

/** Solution
 * Runtime 16 ms	MeMory 9.4 MB; 
 * faster than 87.88%, less than 100% 
 * O(n) ; O(1)
*/

void rotate(vector<int>& nums, int k) {
  int const LEN = nums.size();
  k = k%LEN;
  int ct = 0;
  for (int st=0;ct<LEN;st++) {
    int curr = st;
    int prev = nums[st];
    do {
      int next = (curr+k)%LEN;
      int tmp  = nums[next];
      nums[next] = prev;
      prev = tmp;
      curr = next;
      ct++;
    } while (st!=curr);
  }
}