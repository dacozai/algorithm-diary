/** Practice Question from HIRED 
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 2nd, February, 2020
 * Source : https://hired.com/home
 * 
 * Compare left and right
 * 
*/

#include <vector>
#include <iostream>
#include <string>
#include <cmath>

/** Solution
 * 100%
 * O(n) ; O(1)
*/
std::string solution(std::vector<long> arr) {
    long odd = 0, even = 0, i = 1, root = 0, delta = 0;
    while (i < arr.size()) {
        delta = std::pow(2, root);
        int st = i;
        for (; i<st+delta;i++) {
            if (i>= arr.size()) {
                if (odd == even)    return "";
                return odd>even ? "Left" : "Right";               
            }
            odd += arr[i];
        }
        st = i;
        for (; i<st+delta;i++) {
            if (i>= arr.size()) {
                if (odd == even)    return "";
                return odd>even ? "Left" : "Right";               
            }
            even += arr[i];
        }
        ++ root;
    } 

    return "";
}

int main() {
  std::vector<long> arr  = {1L,4L,100L,5L};
  solution(arr); 
  return 0;
}