#include "test.h"
/** Question no.121 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock),
 * design an algorithm to find the maximum profit. Note that you cannot sell a stock before you buy one. 
*/

/** BruteForce Solution
 * Runtime 828 ms	MeMory 9.4 MB; 
 * faster than 8.73%, less than 100.00% 
 * O(n^2) ; O(1)
*/
int maxProfit_0(std::vector<int>& prices) {
  int max_profit = 0;
  int LEN = prices.size();
  int i,j;
  
  for (i=0;i<LEN-1;i++) {
    for (j=i+1;j<LEN;j++) {
      if (prices[j] - prices[i] > max_profit)
        max_profit = prices[j] - prices[i];
    }
  }
  
  return max_profit;
}

/** One-Pass Solution (Official Solution)
 * Runtime 4-8 ms	MeMory 9.4 MB; 
 * faster than 98.46% - 66.92%, less than 99.08% - 100% 
 * O(n) ; O(1)
*/
int maxProfit(std::vector<int>& prices) {
  int i;
  int max_profit = 0;
  int min_price = INT_MAX;
  
  for (i=0; i<prices.size(); i++) {
    if (prices[i] < min_price)
      min_price = prices[i];
    if (prices[i] - min_price > max_profit)
      max_profit = prices[i] - min_price;
  }
  
  return max_profit;
}