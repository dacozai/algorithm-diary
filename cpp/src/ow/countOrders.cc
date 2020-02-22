#include "test.h"
#include <unordered_map>
/** Question no 1359. Hard Count All Valid Pickup and Delivery Options
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 22th, February, 2020 
 * Source : https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/ 
 * Given n orders, each order consist in pickup and delivery services. 
 * 
 * Count all valid pickup/delivery possible sequences such that delivery(i) is always after of pickup(i). 
 * 
 * Since the answer may be too large, return it modulo 10^9 + 7. 
 * 
*/

int countOrders(int n) {
  long tmp = 1, mod = 1e9+7;
  for (int i=1;i<=n;i++) {
    tmp = (i*2-1) * tmp *i % mod;
  }
  return tmp;
}

