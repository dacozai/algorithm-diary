#include "test.h"
/** Question no 1306. medium Jump Game III
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 19th, February, 2020
 * Source : https://leetcode.com/problems/jump-game/
 * 
 * Given an array of non-negative integers arr, you are initially positioned at start index of the array. 
 * 
 * When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach to any index with value 0.
 * 
 * Notice that you can not jump outside of the array at any time.
 * 
*/

/** Solution
 * Runtime 16 ms	MeMory 12.2 MB; 
 * faster than 99.72%, less than 100.00%
 * O(n) ; O(n) 
*/
bool canReach(vector<int>& arr, int start) {
  stack<int> stk;
  stk.push(start);
  
  while (!stk.empty()) {
    int pos = stk.top();
    stk.pop();
    if (arr[pos] == 0)  return true;
    if(arr[pos] == -1)  continue;
    if(pos+arr[pos]<arr.size()) stk.push(pos+arr[pos]);
    if(pos-arr[pos]>=0) stk.push(pos-arr[pos]);
    arr[pos] = -1;
  }
  
  return false;
}
