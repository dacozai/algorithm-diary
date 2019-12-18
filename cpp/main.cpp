#include <iostream>
#include <cstdlib>
#include "select.h"
#include <vector>

int main (int argc, char *argv[]) {
  int question_number = atoi(argv[argc-1]);
  run(question_number);
  return 0;
}