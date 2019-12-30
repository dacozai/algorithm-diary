#include "test.h"
#include <cstring>
/** Question no.265 Hard
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 29th, December, 2019 
 * Source : https://leetcode.com/problems/fizz-buzz/
 * Write a program that outputs the string representation of numbers from 1 to n.
 * 
 * But for multiples of three it should output “Fizz” instead of the number and 
 * for the multiples of five output “Buzz”. 
 * For numbers which are multiples of both three and five output “FizzBuzz”.
 * 
*/

/** Solution
 * Runtime 4 ms	MeMory 10.4 MB; 
 * faster than 96.75%, less than 50% 
 * O(N) O(N)
*/


std::vector<std::string> fizzBuzz(int n) {
  std::vector<std::string> v;
  for (int i=1;i<=n;i++) {
    if (i%15==0) 
      v.push_back("FizzBuzz");
    else if (i%3==0)
      v.push_back("Fizz");
    else if (i%5==0)
      v.push_back("Buzz");
    else
      v.push_back(std::to_string(i));
  }
  return v;
}