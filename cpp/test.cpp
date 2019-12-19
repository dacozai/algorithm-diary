#include <vector>
#include <iostream>
#include <cstdlib>

int main () {
  /*
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  */
  std::vector<int> vec {1,2,3};

  for (int x: vec)
    std::cout << x << std::endl;


  return 0;
}