/** Resources: https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/
 * Score: 100% 
 * O(n); O(n)
 * Space could be O(1)
 */

vector<int> solution(vector<int> &A, int K) {
    int LEN = A.size();
    K %= LEN;
    if (K == 0)    return A;
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> vec(LEN);
    for (int i=0;i<LEN;i++) {
        vec[(i+K)%LEN] = A[i];
    }
    return vec;
}
