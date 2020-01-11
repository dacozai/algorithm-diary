#include "test.h"
/** Question 1314 medium - Matrix Block Sum
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 11th, January, 2019 
 * Source : https://leetcode.com/problems/matrix-block-sum/
 * 
 * Given a m * n matrix mat and an integer K, return a matrix answer where each answer[i][j] is 
 * the sum of all elements mat[r][c] for i - K <= r <= i + K, j - K <= c <= j + K, and (r, c) is 
 * a valid position in the matrix.
 * 
*/

/** Solution [NOT DONE]
 * Runtime 328 ms	MeMory 11.8 MB; 
 * faster than 30%, less than 100% 
 * O(n) ; O(n)
*/

class Solution {
public:
  vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::vector<std::vector<int>> nums;
    int R = mat.size(), C = mat[0].size();
    for (int i=0;i<R;i++) {
      vector<int> t;
      for (int j=0;j<C;j++)
        t.push_back(0);
      nums.push_back(t);
    }
    int tt = 0;
    bool tt_flag = false;
    
    for (int i=0;i<R;i++) {
      for (int j=0;j<C;j++) {
        int tmp = 0;
        if (safe(i-K, R) == 0 && safe(i+K, R) == R-1\
            && safe(j-K, C) == 0 && safe(j+K, C) == C-1) {
          if (! tt_flag) {
            for (int r=safe(i-K, R); r<=safe(i+K, R); r++)
              for (int c=safe(j-K, C); c<=safe(j+K, C); c++)
                tt += mat[r][c];
            tt_flag = true;
          }
          tmp = tt;
        } else {
          for (int r=safe(i-K, R); r<=safe(i+K, R); r++)
            for (int c=safe(j-K, C); c<=safe(j+K, C); c++)
              tmp += mat[r][c];
        }
        
        nums[i][j] = tmp;
      }
    }
    
    return nums;
  }
  
  int safe(int n, int bd) {
    if (n <  0)  return 0;
    if (n >= bd)  return bd-1;
    return n;
  }
};