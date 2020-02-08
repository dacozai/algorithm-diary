#include "test.h"
/** Question no 56 medium Merge Intervals
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, February, 2020
 * Source : https://leetcode.com/problems/merge-intervals/
 * 
 * Given a collection of intervals, merge all overlapping intervals.
 * 
*/

/** Solution (Greedy)
 * Runtime 16 ms	MeMory 12.3 MB; 
 * faster than 94.61%, less than 100.00%
 * O(n) ; O(n^2) 
*/

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
  std::vector<std::vector<int>> vec;
  if (intervals.size() == 0)  return vec; 
  std::sort(intervals.begin(), intervals.end());
  int pos = 0;
  for (int i=1; i<intervals.size(); i++ ) {
    if (intervals[pos][1]>= intervals[i][0]) {
      intervals[pos][1] = std::max(intervals[i][1], intervals[pos][1]);
    } else {
      vec.push_back(intervals[pos]);
      pos = i;
    }
  }
  vec.push_back(intervals[pos]);

  return vec;
}

