#include "test.h"
/** Question no 118	easy - Pascal's Triangle    
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 19th, January, 2020
 * Source : https://leetcode.com/problems/pascals-triangle/
 * 
 * Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.8 MB; 
 * faster than 100.00%, less than 82.35%
 * O(n^2) ; O(n^2)
*/

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> ans;
    
    for (int i=0; i<numRows; i++) {
      std::vector<int> vec;
      if (i == 0) {
        vec.push_back({1});
      } else {
        for (int j=0; j<ans[i-1].size(); j++) {
          if (j==0) {
            vec.push_back(ans[i-1][j]);
          } else {
            vec.push_back(ans[i-1][j] + ans[i-1][j-1]);
          }
        }
        vec.push_back(1);
      }
      
      ans.push_back(vec);
    }
    
    return ans;
  }


