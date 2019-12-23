#include "test.h"
/** Question no.121 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, December, 2019 
 * Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * 
 * Design an algorithm to find the maximum profit. You may complete as many transactions as you like 
 * (i.e., buy one and sell one share of the stock multiple times).
*/

/** First Solution
 * Runtime 4 ms	MeMory 9.6 MB; 
 * faster than 98.01%, less than 74.6% 
 * O(A+B), A,B<n ; O(1)
*/
int maxProfit_II0(std::vector<int>& prices) {
  int i=0, maxprofit=0;
  int LEN = prices.size();
  if (LEN == 0) return maxprofit;
  int low_pt = prices[0], high_pt = prices[0];
  
  while (i<LEN-1) {
    while(i<LEN-1 && prices[i]>=prices[i+1])
      i++;
    low_pt = prices[i];
    while(i<LEN-1 && prices[i]<=prices[i+1])
      i++;
    high_pt = prices[i];
    maxprofit += high_pt-low_pt;
  }
  return maxprofit;
}

/** Intuition Solution 
 * Runtime 4-8 ms	MeMory 9.4-9.6 MB; 
 * faster than 98.01%, less than 96.83% 
 * O(n) ; O(1)
*/
int maxProfit_II(std::vector<int>& prices) {
  int max_profit = 0;
  for (int i=1; i<prices.size(); i++) {
    if (prices[i] - prices[i-1] > 0)
      max_profit+=prices[i] - prices[i-1];
  }
  return max_profit;
}