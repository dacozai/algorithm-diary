#include "test.h"
/** Question no.256 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, December, 2019 
 * Source : https://leetcode.com/problems/house-robber/
 * There are a row of n houses, each house can be painted with one of the three colors: red, blue or green. 
 * The cost of painting each house with a certain color is different. You have to paint all the houses such that 
 * no two adjacent houses have the same color.
 * 
 * The cost of painting each house with a certain color is represented by a n x 3 cost matrix. 
 * For example, costs[0][0] is the cost of painting house 0 with color red; costs[1][2] is 
 * the cost of painting house 1 with color green, and so on... Find the minimum cost to paint all houses.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 9.5 MB; 
 * faster than 97.04%, less than 100% 
 * O(N) O(1)
*/

int minCost(std::vector<std::vector<int>>& costs) {
  if(costs.size() == 0) return 0;
  int LEN = costs.size()-1;
  for(int i = 1; i <=LEN; i++){
    costs[i][0] += std::min(costs[i-1][1], costs[i-1][2]);
    costs[i][1] += std::min(costs[i-1][0], costs[i-1][2]);
    costs[i][2] += std::min(costs[i-1][1], costs[i-1][0]);
  }
  return std::min(std::min(costs[LEN][0], costs[LEN][1]), costs[LEN][2]);
}