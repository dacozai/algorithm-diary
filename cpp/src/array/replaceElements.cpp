#include "test.h"
/** Question no 1299 easy Replace Elements with Greatest Element on Right Side
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 13th, January, 2020 
 * Source : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
 * 
 * Given an array arr, replace every element in that array with the greatest element among the elements to its right, 
 * and replace the last element with -1.
 * 
 * After doing so, return the array.
 * 
*/

/** Solution
 * Runtime 36 ms	MeMory 10.8 MB; 
 * faster than 99.91%, less than 100% 
 * O(n) ; O(1)
*/

std::vector<int> replaceElements(std::vector<int>& arr) {
  std::vector<int> vec = arr;
  int max_num = -1;
  for (int i=arr.size()-1; i>=0; i--) {
    vec[i] = max_num;
    max_num = std::max(max_num, arr[i]);
  }
  return vec;  
}