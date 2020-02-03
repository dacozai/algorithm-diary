#include "test.h"
/** Question no 266 easy Palindrome Permutation
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 3rd, February, 2020
 * Source : https://leetcode.com/problems/palindrome-permutation/
 * 
 * Implement strStr().
 * 
 * Given a string, determine if a permutation of the string could form a palindrome.
 * 
*/

/** Solution (Classic)
 * Runtime 0 ms	MeMory 8.4 MB; 
 * faster than 100.00%, less than 75.00%
 * O(n) ; O(1)
*/

bool canPermutePalindrome(std::string s) {
    int LEN = 128;// ASCII letters
    std::vector<int> mine(128, 0);
    for (auto ch: s) {
        mine[(int) ch]++;
    }
    
    int flag=0;
    for(int i=0; i<LEN && flag<=1;i++) {
        if (mine[i]%2==1) {
            flag++;
        }
    }
    
    
    return flag<=1;
}