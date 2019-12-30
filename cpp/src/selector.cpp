#include "select.h"

void run(int Q_number) {
  switch (Q_number) {
    case 1:
      Test_twoSum();
      break;
    case 2:
      Test_addTwoNumbers();
      break;
    case 19:
      Test_removeNthFromEnd();
      break;
    case 21:
      Test_mergeTwoLists();
      break;
    case 26:
      Test_removeDuplicates();
      break;
    case 53:
      Test_maxSubArray();
      break;
    case 70:
      Test_climbStairs();
      break;
    case 104:
      Test_maxDepth();
      break;
    case 121:
      Test_maxProfit();
      break;
    case 122:
      Test_maxProfitII();
      break;
    case 189:
      Test_rotate();
      break;
    case 198:
      Test_rob();
      break;
    case 206:
      Test_reverseList();
      break;
    case 265:
      Test_minCostII();
      break;
  }
  return;
}