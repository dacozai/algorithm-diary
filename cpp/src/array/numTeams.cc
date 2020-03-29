#include "test.h"
/** Question no 1395. medium Count Number of Teams
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 27th, March, 2020
 * Source : https://leetcode.com/problems/count-number-of-teams/
 * 
 * There are n soldiers standing in a line. Each soldier is assigned a unique rating value.
 * 
 * You have to form a team of 3 soldiers amongst them under the following rules:
 * 
 * Choose 3 soldiers with index (i, j, k) with rating (rating[i], rating[j], rating[k]).
 * A team is valid if:  (rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]) where (0 <= i < j < k < n).
 * Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).
 * 
*/

/** Solution (Greedy)
 * Runtime 4 ms	MeMory 7.8 MB; 
 * faster than 100%, less than 100%
 * O(n^2) ; O(1) 
*/

int numTeams(std::vector<int>& rating) {
  int ans = 0;
  
  for (int i=0; i<rating.size(); i++) {
    int leftSmall=0, rightLarge=0, leftLarge=0, rightSmall=0;
    
    for (int j=0; j<i; j++) {
      leftSmall += rating[i]>rating[j]?1:0;
      leftLarge += rating[i]<rating[j]?1:0;
    }
    for (int k=i+1; k<rating.size(); k++) {
      rightLarge += rating[i]<rating[k]?1:0;
      rightSmall += rating[i]>rating[k]?1:0;
    }
    
    ans += leftSmall*rightLarge + leftLarge*rightSmall;
  }
  return ans;
}
