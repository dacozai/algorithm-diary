#include "test.h"
#include <map>
#include <unordered_map>
/** Question no 1338 medium Reduce Array Size to The Half
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 4th, February, 2020 
 * Source : https://leetcode.com/contest/weekly-contest-174/problems/reduce-array-size-to-the-half/
 * 
 * Given an array arr.  You can choose a set of integers and remove all the occurrences of these integers in the array.
 * 
 * Return the minimum size of the set so that at least half of the integers of the array are removed.
 * 
*/

/** Solution
 * Runtime 188 ms	MeMory 38.7 MB; 
 * faster than 94.63%, less than 100.00%
 * O(n) ; O(1)
*/

int minSetSize(std::vector<int>& arr) {
  std::unordered_map<int, int> mp;
  std::map<int, std::vector<int>> vm;
  for (auto em: arr) {
    mp[em] ++;
  }
  for (auto itr: mp)
    vm[itr.second].push_back(itr.first);

  int sz = arr.size(), ans=0, ctup = 0;
  std::map<int, std::vector<int>>::reverse_iterator rit;
  for (rit=vm.rbegin(); rit!=vm.rend(); ++rit) {
    // std::cout << rit->first << std::endl;
    for (auto e: rit->second) {
      ctup += rit->first;
      ans++;
      if (ctup>=sz/2) return ans;
    }
  }

  
  return ans;
}