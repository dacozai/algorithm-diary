#include <iostream>
#include <cstdlib>

int *chk(int **);

int main () {
  int a = 1;
  int* pt1 = &a;
  int** pt2 = &pt1;
  std::cout << a << std::endl;
  *pt1 = 3;
  std::cout << a << std::endl;
  **pt2 = 1;
  std::cout << a << std::endl;
  *pt2 = chk(&pt1);
  **pt2 = 4;
  std::cout << a << std::endl;
  std::cout << **pt2 << std::endl;

  return 0;
}

int *chk(int **a) {
  int *p;
  p = *a;
  *p = 3;
  return p;
}