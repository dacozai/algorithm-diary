#include "test.h"
#include "unordered_map"
/** Question no 1310. medium XOR Queries of a Subarray
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 13th, February, 2020
 * Source : https://leetcode.com/problems/xor-queries-of-a-subarray/
 * 
 * Given the array arr of positive integers and the array queries where queries[i] = [Li, Ri], 
 * for each query i compute the XOR of elements from Li to Ri (that is, arr[Li] xor arr[Li+1] xor ... xor arr[Ri] ). 
 * Return an array containing the result for the given queries.
 * 
*/


/** Solution
 * Runtime 120 ms	MeMory 34.1 MB; 
 * faster than 96.49%, less than 100.00%
 * O(n) ; O(1) 
*/

std::vector<int> xorQueries(std::vector<int>& arr, std::vector<std::vector<int>>& queries) {
  std::vector<int> ans;
  std::vector<int> x(queries.size());
  for (int i = 1; i < arr.size(); i++)
    arr[i] ^= arr[i - 1];
  
  for (int i = 0; i < queries.size(); i++) {
    x[i] = arr[queries[i][1]];
    if (queries[i][0] > 0)
      x[i] ^= arr[queries[i][0] - 1];
  }
  
  return ans;
}
