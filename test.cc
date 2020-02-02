
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector< long > arr) {
    // Type your solution here
    long odd = 0, even = 0, i = 1, root = 0, delta = 0;
    while (i < arr.size()) {
        delta = std::pow(2, root);
        int st = i;
        for (; i<st+delta;i++) {
            if (i>= arr.size()) {
                if (odd == even)    return "";
                return odd>even ? "Left" : "Right";               
            }
            odd += arr[i];
        }
        st = i;
        for (; i<st+delta;i++) {
            if (i>= arr.size()) {
                if (odd == even)    return "";
                return odd>even ? "Left" : "Right";               
            }
            even += arr[i];
        }
        ++ root;
    } 

    return "";
}

int main() {
  vector<long> arr;
  arr.push_back(1);
  arr.push_back(4);
  arr.push_back(100);
  arr.push_back(5);
  solution(arr); 
  return 0;
}