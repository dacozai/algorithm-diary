#include <iostream>
#include <cstdlib>
#include "select.h"
#include <vector>

int main (int argc, char *argv[]) {
  int question_number = atoi(argv[argc-1]);
  run(question_number);
  std::cout << "Congratulations, you pass the examination!" << std::endl; 
  return 0;
}