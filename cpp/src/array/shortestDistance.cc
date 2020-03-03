#include "test.h"
/** Question no 243. easy Shortest Word Distance
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 3rd, March, 2020
 * Source : https://leetcode.com/problems/shortest-word-distance/
 * 
 * Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.
 * 
*/

/** Solution
 * Runtime 12 ms	MeMory 9.3 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1) 
*/

int shortestDistance(std::vector<std::string>& words, std::string word1, std::string word2) {
  int pos_w1 = -1, pos_w2 = -1, minDistance = words.size();
  
  for (int i=0;i<words.size();i++) {
    if (words[i] == word1)  pos_w1=i;
    if (words[i] == word2)  pos_w2=i;
    if (pos_w1 != -1 && pos_w2 != -1) {
      minDistance = std::min(minDistance, abs(pos_w2-pos_w1));
    }
  }
  return minDistance;
}
