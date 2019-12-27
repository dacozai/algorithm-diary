#include <iostream>
#include <cstdlib>

/** Pinter Note
 * Building this note is because pointer is very confusing. Therefore, I want to write code to build some
 * examples to clarify my understandings to pointers.
*/
void case1();
void case2();
void case3();
void case4();
int *p(int);
int *(*p(int))[3];

int main() {
  case4(); 
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
  std::cout << std::endl;
  arr[0] = 0;
  for (int i=0;i<9;i++) *(ptr+i) = (i+1);
  for (int i=0;i<2;i++)  
    std::printf("&arr[%d]: %d, *(ptr+%d): %d\n", i, arr[i], i, *ptr+i); 

  std::cout << std::endl;
  std::printf("size of array: %lu\n", sizeof(arr)); 
  std::printf("size of ptr: %lu\n", sizeof(ptr)); 
  std::cout << std::endl;
  std::printf("*ptr: %d\n", *ptr);// where is *ptr now.
  std::printf("*ptr++: %d\n", *ptr++);// dereference ptr firstly, and then 
  std::printf("*ptr: %d\n", *ptr);// where is *ptr now.
  std::printf("*++ptr: %d\n", *++ptr);//  
  std::printf("*ptr: %d\n", *ptr);// where is *ptr now.
  std::printf("++*ptr: %d\n", ++*ptr); 
  std::printf("*ptr: %d\n", *ptr);// where is *ptr now.

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
  int **_2D_array;
  int row = 5, col = 4;
  _2D_array = new int *[row];
  for (int i=0;i<row;i++)
    *(_2D_array+i) = new int[col];
  
  for (int i=0;i<row;i++) {
    for (int j=0;j<col;j++)
      std::cout << _2D_array[i][j] << " ";
    std::cout << "" << std::endl;
  }
}

void case3() {
  char *p;
  char nm[4] = {"dog"};
  char (*q)[4];
  p = nm;
  q = &nm;

  std::printf("p = %p, q = %p\n", p, q);
  // p = 0x7ffee89137c4, q = 0x7ffee89137c4
  p++;
  q++;
  std::cout << "After increasing 1 ..." << std::endl; 
  std::printf("p = %p, q = %p\n", p, q);
  // p = 0x7ffee89137c5, q = 0x7ffee89137c8
  std::cout << "Let us see what's going on here!" << std::endl;
  std::printf("p = %c, q = %s\n\n", *p, *q);
  // p = o, q = ?7??? 
  p--;
  q--;
  std::cout << "After deducting 1 ..." << std::endl; 
  std::printf("p = %c, q = %s\n\n", *p, *q);
  // p = d, q = dog
  
  /*
  //Array of pointers 
  char *r[3] = {"I ","love ","cpp."};
  std::cout << r[0] << std::endl;
  // output: I\0
  std::cout << r[1] << std::endl;
  // output: love\0
  std::cout << r[1][0] << std::endl;
  // output: l
  */

}

int *p(int a) {
  int *tmp = &a;
  return tmp;
}

void case4() {
  int *d = p(3);
  std::printf("d is %p and value is %d\n", d, *d);
}




