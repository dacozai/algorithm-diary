#include "test.h"
/** Question no 17 medium Letter Combinations of a Phone Number
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 14th, February, 2020
 * Source : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 * 
 * Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
 * 
 * A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
 * 
*/

/** Solution (Greedy)
 * Runtime 0 ms	MeMory 8.5 MB; 
 * faster than 100.00%, less than 95.71%
 * O(3^n * 4^m) ; O(3^n * 4^m) 
*/


class Solution {
public:
  std::vector<std::string> tel = {
    {"abc"},
    {"def"},
    {"ghi"},
    {"jkl"},
    {"mno"},
    {"pqrs"},
    {"tuv"},
    {"wxyz"}
  };
  std::vector<std::string> letterCombinations(std::string digits) {
		std::vector<std::string> result;
		if (digits.empty()) return result;
		dfs4(digits, 0, "", result);
		return result;
	}
  
	void dfs4(const std::string &digits, size_t cur, std::string path, std::vector<std::string> &result) {
		if (cur == digits.size()) {
			result.push_back(path);
			return;
		}
		for (auto c : tel[digits[cur] - '2']) {
			dfs4(digits, cur + 1, path + c, result);
		}
	}
};

class Solution_backTrack {
private:
  std::vector<std::string> tel = {
    {"abc"},
    {"def"},
    {"ghi"},
    {"jkl"},
    {"mno"},
    {"pqrs"},
    {"tuv"},
    {"wxyz"}
  };
  
  std::vector<std::string> vec;
public:
  std::string aux;
  std::vector<std::string> subset;

  void bt(int n) {
    if(aux.size() == subset.size()){
      vec.push_back(aux);
      return;
    }
    for(int i=0;i<subset[n].size();++i){
      aux.push_back(subset[n][i]);
      bt(n+1);
      aux.pop_back();
    }
  }

  std::vector<std::string> letterCombinations(std::string digits) {
    if(digits.empty())  return{};
    
    for(char i:digits)  subset.push_back(tel[i-'2']);
    bt(0);
    return vec;
  }
};
