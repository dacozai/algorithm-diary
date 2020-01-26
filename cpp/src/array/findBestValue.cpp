#include "test.h"
/** Question no 1300. medium Sum of Mutated Array Closest to Target
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 15th, January, 2020
 * Source : https://leetcode.com/problems/sum-of-mutated-array-closest-to-target/
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 9.5 MB; 
 * faster than 100.00%, less than 100% 
 * O(n) ; O(1)
*/

int findBestValue(std::vector<int>& arr, int target) {
  /* Speed Up */
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  /* Varialbes */
  int LEN = arr.size(), ANS, Total_gap=0, smaller_nums=0;
  double tmp_ans = (double)target/LEN, max_num = 0.0d;
  ANS = (tmp_ans-(int)tmp_ans)>0.5?tmp_ans+1:tmp_ans;
  
  for (auto e: arr) {
    if (e <= ANS) {
      Total_gap += ANS-e;
      smaller_nums++;
    }
    max_num = max(max_num, (double)e);
  }

  tmp_ans = (abs(target-ANS*LEN)+Total_gap)/(LEN-smaller_nums);
  return min(max_num, ANS+tmp_ans);
}