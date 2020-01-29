/** Resources: https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/
 * Score: 100% 
 */

/* Solution O(n), O(1) */
vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int ct = 0, LEN = A.size();
    
    for (int pos=0 ; ct<LEN; pos++) {
        int cur_pos = pos;
        int prev = A[pos];
        do {
            int rotat_pos = (cur_pos+K)%LEN;
            int tmp = A[rotat_pos];
            A[rotat_pos] = prev;
            
            cur_pos = rotat_pos;
            prev = tmp;
            ct++;
        } while(cur_pos != pos);
    }
    return A;
}

/* trivial solution O(n), O(n)*/
vector<int> trivial_solution(vector<int> &A, int K) {
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
