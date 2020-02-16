#include "test.h"
/** Question no 1352. Medium Product of the Last K Numbers
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 16th, February, 2020
 * Source : https://leetcode.com/problems/product-of-the-last-k-numbers/
 * 
 * Implement the class ProductOfNumbers that supports two methods:
 * 
 * 1. add(int num)
 * Adds the number num to the back of the current list of numbers.
 * 
 * 2. getProduct(int k)
 * Returns the product of the last k numbers in the current list.
 * You can assume that always the current list has at least k numbers.
 * At any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing. 
 * 
*/

/** Solution (Greedy)
 * Runtime 1376 ms	MeMory 62.8 MB; 
 * faster than 9%, less than 100.00%
 * O(n) ; O(n) 
*/

class ProductOfNumbers {
public:
  std::vector<int> vec;
  ProductOfNumbers() { }
  
  void add(int num) {
    vec.push_back(num);
  }
  
  int getProduct(int k) {
    int ans = 1, sz = vec.size();
    for (int i=sz-1;i>=sz-k;i--)
      ans *= vec[i];
    return ans;
  }
};
