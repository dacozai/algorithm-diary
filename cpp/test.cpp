#include <iostream>
#include <cstdlib>
#include <vector>

int main () {
  int x=1;
  while(x<10) {
    std::cout << ++x << std::endl;
  }
  return 0;
}
