#include "test.h"
/** Question no 860 easy Lemonade Change
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 14th, March, 2020
 * Source : https://leetcode.com/problems/lemonade-change/
 * 
 * At a lemonade stand, each lemonade costs $5. 
 * 
 * Customers are standing in a queue to buy from you, and order one at a time (in the order specified by bills).
 * 
 * Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill.  
 * You must provide the correct change to each customer, so that the net transaction is that the customer pays $5.
 * 
 * Note that you don't have any change in hand at first.
 * 
 * Return true if and only if you can provide every customer with correct change.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 8.6 MB; 
 * faster than 97.13%, less than 100.00%
 * O(n) ; O(1) 
*/

bool lemonadeChange(std::vector<int>& bills) {
  std::vector<int> chg(3, 0);

  for (auto item: bills) {
    switch (item) {
      case 5:
        chg[0]++;
        break;
      case 10:
        if (chg[0] == 0)  return false;
        chg[0]--;
        chg[1]++;
        break;
      default:
        if (chg[1] == 0 ) {
          if (chg[0]<3) return false;
          chg[0]-=3;
        } else {
          if (chg[0] == 0)  return false;
          chg[0]--;
          chg[1]--;
        }
        chg[2]++;
        break;
    }
  }

  return true;
}
