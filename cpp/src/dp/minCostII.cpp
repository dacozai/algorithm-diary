#include "test.h"
/** Question no.265 Hard
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, December, 2019 
 * Source : https://leetcode.com/problems/house-robber/
 * There are a row of n houses, each house can be painted with one of the k colors. 
 * The cost of painting each house with a certain color is different. You have to paint all the houses 
 * such that no two adjacent houses have the same color.
 * 
 * The cost of painting each house with a certain color is represented by a n x k cost matrix. 
 * For example, costs[0][0] is the cost of painting house 0 with color 0; costs[1][2] is 
 * the cost of painting house 1 with color 2, and so on... Find the minimum cost to paint all houses.
 * 
*/

/** Solution
 * Runtime 8-12-16 ms	MeMory 10-10.2 MB; 
 * faster than 99.29(5%) - 90.79(60%) - 58.22(35%)%, less than 100% 
 * O(N) O(1)
*/

int minCostII(std::vector<std::vector<int>>& costs) {
  if(costs.size() == 0) return 0;
  for(int i = 1; i <costs.size(); i++)
    for (int j=0; j<costs[i].size(); j++)
      costs[i][j] += minCostII_findMin(costs[i-1], true, j);
  return minCostII_findMin(costs[costs.size()-1], false, 0);
}

int minCostII_findMin(std::vector<int>& v, bool flag, int indx) {
  int min_val = INT_MAX;
  for (int k=0; k<v.size(); k++) {
    if (flag && k==indx) continue;
    min_val = std::min(min_val,v[k]);
  }
  return min_val;
}