
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    vector<int> char_arr(26,0);
    // Type your solution here
    for (auto ch: s) {
        int pos = ch - (int)'a';
        char_arr[pos]++;
    }
    int fg = 0;
    for (auto elem: char_arr) {
        std::cout << elem << std::endl;
        if (elem%2 == 1) {
            fg++;
            if (fg >= 2)    return false;
        }
    }
        
   return true;
}

int main() {
    solution("bog");
    return 0;
}