#include <iostream>
#include <cstdlib>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

ListNode *arrayToList(int[], int);
void insert(ListNode**, int); 
bool cmpTwoLinkedLists(ListNode**, ListNode**);