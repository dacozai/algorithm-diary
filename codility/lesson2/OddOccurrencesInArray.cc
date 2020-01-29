/** Resources: https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
 * Score: 100% 
 */

/* Solution O(n), O(n) */
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::unordered_map<int,int> ma;
    for (int elem: A) {
        ma[elem]++;
    }
    for (auto em: ma) {
        if (em.second%2)
            return em.first;
    }
    throw("Everything is paried!");
}