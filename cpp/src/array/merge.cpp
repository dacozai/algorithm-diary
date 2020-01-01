#include "test.h"
/** Question no.88 easy
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 1st, January, 2020
 * Source : https://leetcode.com/problems/merge-sorted-array/
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 * 
 * Note:
 *  The number of elements initialized in nums1 and nums2 are m and n respectively.
 *  You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.7 MB; 
 * faster than 100%, less than 89.13% 
 * O(n) ; O(1)
*/
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
  int i=0, j=0,t=-1;
  while (i<m+n && j<n) {
    if (i>m+t) {
      nums1[i] = nums2[j];
      j++;
    } else {
      if (nums1[i] > nums2[j]) {
        for (int k=nums1.size()-1;k>i;k--)
          nums1[k] = nums1[k-1];
        nums1[i] = nums2[j];
        j++;
        t++;
      }
    }
    i++;
  }
}