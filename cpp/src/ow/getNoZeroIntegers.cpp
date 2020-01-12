#include "test.h"
/** Question 1317 easy Convert Integer to the Sum of Two No-Zero Integers
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 12th, January, 2019 
 * Source : https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
 * 
 * Given an integer n. No-Zero integer is a positive integer which doesn't contain any 0 in its decimal representation.
 * 
 * Return a list of two integers [A, B] where:
 * 
 * A and B are No-Zero integers.
 * A + B = n
 * It's guarateed that there is at least one valid solution. If there are many valid solutions you can return any of them. 
 * 
*/

/** BruteForce Solution
 * Runtime 0 ms	MeMory 8.4 MB; 
 * faster than 100.00%, less than 100.00% 
 * O(n) ; O(1)
*/
std::vector<int> getNoZeroIntegers(int n) {
int f=1;
while (containZero(n-f)) {
    f++;
    while(containZero(f)) f++;
}
return {f,n-f};
}
bool containZero(int n) {
std::string s = std::to_string(n);
for (auto c: s)
    if (c == '0')
    return true;
return false;
}