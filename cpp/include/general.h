#include <iostream>
#include <cstdlib>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *arrayToList(int[], int);
void insert(ListNode**, int); 
bool cmpTwoLinkedLists(ListNode**, ListNode**);