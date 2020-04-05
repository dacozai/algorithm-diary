#include "test.h"
/** Question no 1402 hard Reducing Dishes
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 5th, April, 2020
 * Source : https://leetcode.com/problems/reducing-dishes/
 * 
 * A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.
 * 
 * Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes 
 * multiplied by its satisfaction level  i.e.  time[i]*satisfaction[i]
 * 
 * Return the maximum sum of Like-time coefficient that the chef can obtain after dishes preparation.
 * 
 * Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 6.4 MB; 
 * faster than 71.43%, less than 100.00%
 * O(n log n) ; O(1) 
*/

int maxSatisfaction(vector<int>& sat) {
  int sz = sat.size();
  std::sort(sat.begin(), sat.end());
  if (sat[sz-1]<=0)  return 0;
  int ans=0,ct=1;
  
  int total=0,n_total=0;
  for (int i=sz-1;i>=0;i--) {
    if (sat[i] >= 0) total += sat[i];
    else n_total += sat[i];
    if (n_total>total)  break;
    ans = max(ans, ans+total+n_total);
  }
  
  return ans;
}
