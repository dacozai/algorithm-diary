#include "test.h"
/** Question no 1414. medium Find the Minimum Number of Fibonacci Numbers Whose Sum Is K
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 19th, April, 2020 
 * Source : https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/ 
 * 
 * Given the number k, return the minimum number of Fibonacci numbers whose sum is equal to k, 
 * whether a Fibonacci number could be used multiple times.
 * 
*/

int findMinFibonacciNumbers(int k) {
  std::vector<int> vec={1,1,2};
  while (vec[vec.size()-1]<k )  
    vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
  
  int ct=0;
  for (int i=vec.size()-1;i>=0&&k>0;i--) {
    if (vec[i]>k) continue;
    k-=vec[i];
    ct++;
  }
  
  return ct;
}

