#include "test.h"
/** Question 1310. medium - XOR Queries of a Subarray 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, January, 2019 
 * Source : https://leetcode.com/problems/xor-queries-of-a-subarray/
 * 
 * Given the array arr of positive integers and the array queries where queries[i] = [Li, Ri], 
 * for each query i compute the XOR of elements from Li to Ri (that is, arr[Li] xor arr[Li+1] 
 * xor ... xor arr[Ri] ). Return an array containing the result for the given queries.
 * 
*/

/** BruteForce Solution
 * Runtime 68-80 ms	MeMory 25.3-25.4 MB; 
 * faster than 100.00%, less than 100.00% 
 * O(n) ; O(n)
*/
std::vector<int> xorQueries(std::vector<int>& arr, std::vector<std::vector<int>>& queries) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  std::vector<int> ans(queries.size());
  for (int i = 1; i < arr.size(); i++)
    arr[i] ^= arr[i - 1];
  
  for (int i = 0; i < queries.size(); i++) {
    ans[i] = arr[queries[i][1]];
    if (queries[i][0] > 0)
      ans[i] ^= arr[queries[i][0] - 1];
  }
  return ans;
}