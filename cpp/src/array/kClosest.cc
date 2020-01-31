#include "test.h"
#include <map>
/** Question no 973. medium K Closest Points to Origin
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 31th, January, 2020
 * Source : https://leetcode.com/problems/k-closest-points-to-origin/
 * 
 * We have a list of points on the plane.  Find the K closest points to the origin (0, 0).
 * 
 * (Here, the distance between two points on a plane is the Euclidean distance.)
 * 
 * You may return the answer in any order.  The answer is guaranteed to be unique (except for the order that it is in.)
 * 
*/

/** Solution [BAD, needed to be improved]
 * Runtime 284 ms	MeMory 62.7 MB; 
 * faster than 44%, less than 19% 
 * O(n) ; O(n)
*/

std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int K) {
  std::map<long, std::vector<int>> mymap;
  std::vector< std::vector<int> > vec;
  
  for (int i=0;i<points.size(); i++) {
    long dist = pow(points[i][0],2) + pow(points[i][1],2);
    mymap[dist].push_back(i);
  }
  
  int it = 0;
  for (auto em: mymap) {
    for (auto row: em.second) {
      int a = points[row][0], b = points[row][1];
      std::vector<int> v{a,b};
      vec.push_back(v);
      it++;
      if (it == K)  return vec;
    }
  }
  return vec;
}
