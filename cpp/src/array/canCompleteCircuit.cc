#include "test.h"
/** Question no 134 medium Gas Station
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, March, 2020
 * Source : https://leetcode.com/problems/gas-station/
 * 
 * There are N gas stations along a circular route, where the amount of gas at station i is gas[i].
 * 
 * You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.
 * 
 * Return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1.
 * 
*/

/** Solution (Greedy)
 * Runtime 12 ms	MeMory 9.7 MB; 
 * faster than 80.7%, less than 15.15%
 * O(n^2) ; O(1) 
*/

int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
  for (int i=0;i<gas.size();i++) {
    int ct=i, p=0;
    int g=0, c=0;
    while (p<gas.size()) {
      g+=gas[ct%gas.size()];
      c+=cost[ct%cost.size()];
      ct++;
      p++;
      if (g<c)  break;
    }
    if (g>=c) return i;
  }
  return -1;
}