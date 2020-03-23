#include "test.h"
/** Question no 832. easy Flipping an Image
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 23th, March, 2020
 * Source : https://leetcode.com/problems/flipping-an-image/
 * 
 * Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.
 * 
 * To flip an image horizontally means that each row of the image is reversed.  
 * For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].
 * 
 * To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. 
 * For example, inverting [0, 1, 1] results in [1, 0, 0].
 * 
*/

/** Solution
 * Runtime 8 ms	MeMory 8 MB; 
 * faster than 75.27%, less than 100.00%
 * O(n) ; O(1) 
*/

std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A) {
  for (int i=0;i<A.size();i++) {
    int j=0;
    for (;j<A[i].size()/2;j++) {
      int backPos = A[i].size()-1-j;
      int tmp = 1-A[i][j];
      A[i][j] = 1-A[i][backPos];
      A[i][backPos] = tmp;
    }
    if (A[i].size()%2==1) A[i][j] = 1-A[i][j];
  }
  
  return A;
}