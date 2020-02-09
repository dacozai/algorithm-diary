#include "test.h"
/** Question no 215 medium Kth Largest Element in an Array
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 8th, February, 2020
 * Source : https://leetcode.com/problems/kth-largest-element-in-an-array/
 * 
 * Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, 
 * not the kth distinct element.
 * 
*/

/** Solution (Greedy)
 * Runtime 12 ms	MeMory 9.7 MB; 
 * faster than 80.7%, less than 15.15%
 * O(n log n) ; O(n) 
*/

int findKthLargest(std::vector<int>& nums, int k) {
  std::priority_queue<int> pq;
  for (auto em: nums) {
    pq.push(em);
  }
  for (int i=1;i<k;i++) pq.pop();
  
  return pq.top();
}
