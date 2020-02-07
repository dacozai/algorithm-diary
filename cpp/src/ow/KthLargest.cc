#include "test.h"
#include <queue>
/** Question no 703. easy Kth Largest Element in a Stream
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 7th, February, 2020
 * Source : https://leetcode.com/problems/kth-largest-element-in-a-stream/
 * 
 * Design a class to find the kth largest element in a stream. Note that it is the kth largest element in the sorted order, 
 * not the kth distinct element.
 * 
 * Your KthLargest class will have a constructor which accepts an integer k and an integer array nums, 
 * which contains initial elements from the stream. For each call to the method KthLargest.add, 
 * return the element representing the kth largest element in the stream.
 * 
*/

/** Solution
 * Runtime 32 ms	MeMory 19.4 MB; 
 * faster than 100.00%, less than 95.00%
 * O(log n) ; O(n)
*/

static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return 0;
}();
class KthLargest {
public:
  std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
  int size;
  
  KthLargest(int k, std::vector<int>& nums) {
    size = k;
    for (auto n:nums) {
      pq.push(n);
      if (pq.size() > k) pq.pop();
    }
  }
  
  // O n
  int add(int val) {
    pq.push(val);
    if (pq.size() > size) pq.pop();
    return pq.top();
  }
};
