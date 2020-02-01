/** Resources: https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
 * Score: 100% 
 */

/* Solution O(n), O(1) */
#include <vector>

int solution(std::vector<int> &A) {
    int LEN = A.size()+1;
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> vec(LEN, 0);
    for (auto num: A) {
        vec[num-1] = 1;
    }
    for (int i=0;i<LEN;i++) {
        if (vec[i] == 0)
            return i+1;
    }
    throw("No way!!!");
}