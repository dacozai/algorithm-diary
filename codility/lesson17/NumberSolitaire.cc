/** Resources: https://app.codility.com/programmers/lessons/17-dynamic_programming/number_solitaire/
 * Score: 100% 
 */
#include <limits>

/** dp Solution  100%
 * O(n), O(n)
*/
int solution(vector<int> &A) {
    int sz = A.size();
    // write your code in C++14 (g++ 6.2.0)
    std::vector<long int> dp(sz, LONG_MIN);
    dp[0] = A[0];
    for (int i=0; i<sz-1;i++) {
      for (int j=1; j<=PHASE_OF_DICE; j++) {
        if (i+j >= sz)  break;
        dp[i+j] = std::max(dp[i+j], dp[i]+A[i+j]);
      }
    }
    
    return dp[sz-1];
}


/** dfs solution 25%
 * Timeout
*/
#define PHASE_OF_DICE 6
int dfs (vector<int> &A, int ans, int st);

int solution_dfs(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    return dfs(A, 0, 0);
}

int dfs (vector<int> &A, int ans, int st) {
    int LEN = A.size();
    if (st < LEN-1)   ans+=A[st];
    else if (st == LEN-1)    return ans+A[st];
    int tmp_ans = std::numeric_limits<int>::min();
    for (int i=1;i<=PHASE_OF_DICE;i++) {
        if (st+i>LEN-1) return tmp_ans;
        tmp_ans = std::max(tmp_ans, dfs(A, ans, st + i));
    }
    return tmp_ans;
}

