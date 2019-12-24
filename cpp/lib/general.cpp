#include "general.h"
#include <iostream>

ListNode *arrayToList(int arr[], int sz) {
  ListNode* root = nullptr;
  for (int i = 0; i < sz; i++) 
    insert(&root, arr[i]); 
  return root; 
}

void insert(ListNode** root, int item) { 
  ListNode* temp = new ListNode(item); 
  ListNode* ptr; 

  if (*root == NULL)
    *root = temp; 
  else { 
    ptr = *root; 
    while (ptr->next != NULL) 
      ptr = ptr->next; 
    ptr->next = temp; 
  } 
} 

bool cmpTwoLinkedLists(ListNode** sample, ListNode** target) {
  ListNode* temp1;
  ListNode* temp2;
  temp1 = *sample;
  temp2 = *target;
  while (temp1 != NULL) {
    if (temp1->val != temp2->val) return false;
    temp1 = temp1->next;
    temp2 = temp2->next;
  }
  return true;
}