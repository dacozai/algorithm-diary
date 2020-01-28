/** Resources: https://app.codility.com/programmers/lessons/99-future_training/str_symmetry_point/
 * Score: 100% 
 */
int solution(string &S) {
    if (S.size() == 1)  return 0;
    if (S.size()%2 == 0)  return -1;
    // write your code in C++14 (g++ 6.2.0)
    int mid = S.size()/2;
    for (int i=1;i<=mid;i++) {
        if (S[mid-i] != S[mid+i])
            return -1;
    }
    return mid;
}
