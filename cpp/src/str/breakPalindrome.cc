#include "test.h"
/** Question no 1328 medium Break a Palindrome
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 25th, January, 2020
 * Source : https://leetcode.com/problems/binary-tree-postorder-traversal/
 * 
 * Given a palindromic string palindrome, replace exactly one character by any lowercase English letter 
 * so that the string becomes the lexicographically smallest possible string that isn't a palindrome.
 * 
 * After doing so, return the final string.  If there is no way to do so, return the empty string.
 * 
*/

/** Solution
 * Runtime 0 ms	MeMory 8.3 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

string breakPalindrome(string palindrome) {
  if (palindrome.size() <2) return "";
  int ST = 97, ED = 98;
  
  for (int i=ST; i<=ED; i++) {
    for (int pos=0; pos<palindrome.size()/2; pos++) {
      int posNumb = (int) palindrome[pos];
      if ( i != posNumb) {
        int target_pos = i < posNumb ? pos : palindrome.size()-1-pos;
        palindrome[target_pos] = (char) i;
        return palindrome;
      }
    }
  }
  
  throw("Something bad is happened!");
}


