#include "test.h"
/** Question no 1288 medium Remove Covered Intervals
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 13th, February, 2020
 * Source : https://leetcode.com/problems/remove-covered-intervals/
 * 
 * Given a list of intervals, remove all intervals that are covered by another interval in the list. 
 * 
 * Interval [a,b) is covered by interval [c,d) if and only if c <= a and b <= d.
 * 
 * After doing so, return the number of remaining intervals.
 * 
*/


/** Solution
 * Runtime 20 ms	MeMory 11.7 MB; 
 * faster than 93.58%, less than 100.00%
 * O(n log n) ; O(1) 
*/

int removeCoveredIntervals(std::vector<std::vector<int>>& intervals) {
  sort(intervals.begin(), intervals.end());
  int allNum = intervals.size();
  // if (allNum == 1)  return allNum;
  
  int pos=0;
  for(int i=1;i<intervals.size();i++){
    //Covered      
    if (intervals[i][0]>= intervals[pos][0] && intervals[i][1] <= intervals[pos][1])
      allNum--;
    else
      pos = i;
  }
  
  return allNum;
}
