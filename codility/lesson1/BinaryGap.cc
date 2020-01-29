/** Resources: https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
 * Score: 100% 
 */

int solution(int N) {

    bool firstOneFlag = false;
    int gapLen = 0, ans = 0;
    while (N>0) {
        if (N%2 == 0) {
            gapLen ++;
        } else {
            if (firstOneFlag) {
                ans = std::max(ans, gapLen);
            } else {
                firstOneFlag = true;
            }
            gapLen = 0;
        }
        
        N/=2;
    }
    return ans;
}
