#include "test.h"
/** Question no 29 medium Divide Two Integers
 * Author : Li-Han, Chen; 陳立瀚
 * Date   : 17th, February, 2020 
 * Source : https://leetcode.com/problems/divide-two-integers/
 * 
 * Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.
 * 
 * Return the quotient after dividing dividend by divisor.
 * 
 * The integer division should truncate toward zero.
 * 
*/

/** Solution
 * Runtime 0  ms	MeMory 8.3 MB; 
 * faster than 100.00%, less than 100.00%
 * O(n) ; O(1)
*/

int divide(int dividend, int divisor) {
  if(dividend==INT_MIN && divisor==-1) return INT_MAX;
  if(divisor==INT_MIN) return dividend==divisor;
  if(divisor==1) return dividend;
  
  int a=dividend,b=abs(divisor),res=0,i,j;
  for(;dividend>=0?a>=b:a<=-b;) {
      for(i=30;!((1<<i)&b);i--);
      for(j=30-i;dividend>=0?a<(b<<j):a>-(b<<j);j--);
      a-=dividend>=0?(b<<j):-(b<<j);
      res+=(1<<j);
  }
  return (dividend>0)==(divisor>0)?res:-res;
}


