#include "test.h"
/** Question no 1136 hard Parallel Courses
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 13th, March, 2020
 * Source : https://leetcode.com/problems/parallel-courses/
 * 
 * There are N courses, labelled from 1 to N.
 * 
 * We are given relations[i] = [X, Y], representing a prerequisite relationship between course X and 
 * course Y: course X has to be studied before course Y.
 * 
 * In one semester you can study any number of courses as long as you have studied all the prerequisites for 
 * the course you are studying.
 * 
 * Return the minimum number of semesters needed to study all courses.  If there is no way to study all the courses, return -1.
 * 
*/

/** Solution
 * Runtime 192 ms	MeMory 66.67 MB; 
 * faster than 66.67%, less than 100.00%
 * O(n) ; O(n) 
*/

class Solution {
public:
  int minimumSemesters(int N, std::vector<std::vector<int>>& relations) {
      std::vector<int> vDepth(N, 1), visitState(N, 0); // visite state  -1 :visiting;  0:not visit;  1:visited
      std::vector<std::vector<int>> g(N);
      for (auto& v : relations) g[v[0] - 1].push_back(v[1] - 1);
      for (int i = 0; i < N; i++) if (!dfs(i, g, vDepth, visitState)) return -1;
      return *std::max_element(vDepth.begin(), vDepth.end());
  }

  // return false if there is a circle
  bool dfs(int i, const std::vector<std::vector<int>> & g, std::vector<int> & vDepth, std::vector<int> & visitState) {
      if (visitState[i] == 1) return true;
      if (visitState[i] == -1) return false; // circle  
      visitState[i] = -1; //visiting
      for (auto j : g[i]) {
          if (!dfs(j, g, vDepth, visitState)) return false;
          vDepth[i] = std::max(vDepth[i], 1 + vDepth[j]);
      }
      visitState[i] = 1; //visited;
      return true;
  }
};
