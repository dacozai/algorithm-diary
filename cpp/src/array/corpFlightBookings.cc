#include "test.h"
/** Question no 1109. medium Corporate Flight Bookings
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 28th, January, 2020
 * Source : https://leetcode.com/problems/corporate-flight-bookings/
 * 
 * There are n flights, and they are labeled from 1 to n.
 * 
 * We have a list of flight bookings.  The i-th booking bookings[i] = [i, j, k] means that 
 * we booked k seats from flights labeled i to j inclusive.
 * 
 * Return an array answer of length n, representing the number of seats booked on each flight in order of their label. 
 * 
*/

/** Solution
 * Runtime 200 ms	MeMory 47.6 MB; 
 * faster than 97.15%, less than 100% 
 * O(n) ; O(n)
*/

std::vector<int> corpFlightBookings(std::vector<std::vector<int>>& bookings, int n) {
  std::vector<int> ans(n);
  for (auto row: bookings) {
    ans[row[0]-1] += row[2];
    if (row[1]<n)
      ans[row[1]] -= row[2];
  }
  for (int i=1;i<n;i++)
    ans[i] += ans[i-1];
  return ans;
}