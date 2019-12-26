#include <iostream>
#include <cstdlib>

/** Pinter Note
 * Building this note is because pointer is very confusing. Therefore, I want to write code to build some
 * examples to clarify my understandings to pointers.
*/
void case1();
void case2();

int main() {
  case1(); 
  return 0;
}

void case1() {
  int size = 10;
  int arr[size];
  int *ptr;
  /* use pointer to point to the address of variable, arr.
     And, it can be written as ptr = &arr[0]; too! */
  ptr = arr;
  for (int i=0;i<2;i++)  
    std::printf("&arr[%d]: %p, ptr+%d: %p\n", i, &arr[i], i, ptr+i); 
  std::cout<<std::endl;
  arr[0] = 0;
  for (int i=0;i<9;i++) *(ptr+i) = (i+1);
  for (int i=0;i<2;i++)  
    std::printf("&arr[%d]: %d, *(ptr+%d): %d\n", i, arr[i], i, *ptr+i); 

  std::cout<<std::endl;
  std::printf("*ptr++: %d\n", *ptr++); 
  std::printf("*++ptr: %d\n", *++ptr); 
  std::printf("++*ptr: %d\n", ++*ptr); 
  /* Note. About ++i and i++
    i = 1;
    j = ++i;
    (i is 2, j is 2)

    i = 1;
    j = i++;
    (i is 2, j is 1)
  */


  /* The result of this block
  &arr[0]: 0x7ffeec93b790, ptr+0: 0x7ffeec93b790
  &arr[1]: 0x7ffeec93b794, ptr+1: 0x7ffeec93b794

  &arr[0]: 0, *(ptr+0): 0
  &arr[1]: 1, *(ptr+1): 1
  */
}

void case2() {

}




