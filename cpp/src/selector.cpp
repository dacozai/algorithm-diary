#include "select.h"

void run(int Q_number) {
  switch (Q_number) {
    case 1:
      Test_twoSum();
    case 26:
      Test_removeDuplicates();
    case 53:
      Test_maxSubArray();
    case 121:
      Test_maxProfit();
      break;
  }
  return;
}