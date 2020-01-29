#include "test.h"
/** Question no 42. hard Trapping Rain Water
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, January, 2020
 * Source : https://leetcode.com/problems/trapping-rain-water/
 * 
 * Given n non-negative integers representing an elevation map where 
 * the width of each bar is 1, compute how much water it is able to trap after raining.
 * 
*/

/** Solution (Dynamic Programming)
 * Runtime 0 ms	MeMory 9 MB; 
 * faster than 100.00%, less than 91.14% 
 * O(n) ; O(1)
*/
int trap(vector<int>& height) {
    int sz = height.size(), ans=0;
    int zo_max=0, yo_max=0, zo=0, yo=sz-1;

    while (zo < yo) {
        if (height[zo]<height[yo]) {
        (height[zo] > zo_max)? zo_max=height[zo] : ans+=zo_max-height[zo];
        zo++;
        } else {
        (height[yo] > yo_max)? yo_max=height[yo] : ans+=yo_max-height[yo];
        yo--;
        }
    }

    return ans;
}

/*O(n), O(n)*/
int trap_dp(vector<int>& height) {
  if(height.size() == 0)  return 0;
  int ans = 0;
  int LEN = height.size();
  vector<int> left_max(LEN), right_max(LEN);
  left_max[0] = height[0];
  for (int i = 1; i < LEN; i++) {
      left_max[i] = max(height[i], left_max[i - 1]);
  }
  right_max[LEN - 1] = height[LEN - 1];
  for (int i = LEN - 2; i >= 0; i--) {
      right_max[i] = max(height[i], right_max[i + 1]);
  }
  for (int i = 1; i < LEN - 1; i++) {
      ans += min(left_max[i], right_max[i]) - height[i];
  }
  return ans;
}
