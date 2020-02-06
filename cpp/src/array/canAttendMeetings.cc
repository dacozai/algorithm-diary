#include "test.h"
/** Question no 252. easy Meeting Rooms
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 6th, February, 2020
 * Source : https://leetcode.com/problems/meeting-rooms/
 * 
 * Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), 
 * determine if a person could attend all meetings.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 1.19 MB; 
 * faster than 99.45%, less than 100.00%
 * O(n log n) ; O(1)
*/

bool canAttendMeetings(std::vector<std::vector<int>>& intervals) {
  std::sort(intervals.begin(),intervals.end());
  for (int i=1;i<intervals.size();i++) {
    if (intervals[i-1][1] > intervals[i][0])  return false;
  }
  
  return true;
}