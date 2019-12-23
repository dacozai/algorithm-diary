#include "select.h"

void run(int Q_number) {
  switch (Q_number) {
    case 1:
      Test_twoSum();
      break;
    case 26:
      Test_removeDuplicates();
      break;
    case 53:
      Test_maxSubArray();
      break;
    case 121:
      Test_maxProfit();
      break;
    case 122:
      Test_maxProfitII();
      break;
  }
  return;
}