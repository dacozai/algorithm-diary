#include "test.h"
#include "map"
/** Question no 1086. easy High Five
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 18th, February, 2020
 * Source : https://leetcode.com/problems/high-five/
 * 
 * Given a list of scores of different students, return the average score of each student's top five scores 
 * in the order of each student's id.
 * 
 * Each entry items[i] has items[i][0] the student's id, and items[i][1] the student's score.  
 * The average score is calculated using integer division.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 12 MB; 
 * faster than 95.25%, less than 100.00%
 * O(n log n) ; O(n) 
*/

std::vector<std::vector<int>> highFive(std::vector<std::vector<int>>& items) {
  std::map<int,std::vector<int>> id_q;
  std::vector<std::vector<int>> ans;
  int NUM = 5;
  
  for (auto row: items)
    id_q[row[0]].push_back(row[1]);
  
  for (auto stu: id_q) {
    std::sort(stu.second.begin(), stu.second.end());
    int tmp_ans=0;
    for (int i=0; i<NUM; i++)
      tmp_ans+=stu.second[stu.second.size()-1-i];
    ans.push_back({stu.first, tmp_ans/NUM});
  }
  
  return ans;
}
