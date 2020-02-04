#include "test.h"
#include <map>
/** Question no 1337. easy The K Weakest Rows in a Matrix
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020
 * Source : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
 * 
 * Given a m * n matrix mat of ones (representing soldiers) and zeros (representing civilians), 
 * return the indexes of the k weakest rows in the matrix ordered from the weakest to the strongest.
 * 
 * A row i is weaker than row j, if the number of soldiers in row i is less than the number of soldiers in row j, 
 * or they have the same number of soldiers but i is less than j. Soldiers are always stand in the frontier of a row, 
 * that is, always ones may appear first and then zeros.
 * 
*/

/** Solution
 * Runtime 180 ms	MeMory 38.5 MB; 
 * faster than 96.34%, less than 100.00%
 * O(n) ; O(1)
*/

std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
  std::vector<std::vector<int>> mp(101);
  std::vector<int> ans(k,0);
  
  for (int k=0;k<mat.size();k++) {
    int sm = 0;
    for (int em: mat[k]) {
      sm += em;
    }
    mp[sm].push_back(k);
  }
  int ct = 0;
  for (auto rw: mp) {
    for (auto em: rw) {
      ans[ct] = em;
      ct++;
      if (ct == k)  return ans;
    }
  }
  
  return ans;
}