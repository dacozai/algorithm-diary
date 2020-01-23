#include "test.h"
/** Question no 94 medium Binary Tree Inorder Traversal 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 23th, January, 2020
 * Source : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 * 
 *  Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.1 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int subtractProductAndSum(int n) {
  
  int mul = 1, addUp = 0;
  while (n > 0) {
    int indv = n%10;
    mul *= indv;
    addUp += indv;
    n/=10;
  }
  return mul - addUp;
}
