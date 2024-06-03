#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num1 = 10;
 int *p ; // Declare a pointerVariable
 p = &num1; // store the address of num1 to p
 printf("Memory locations of num1 : %x\n",p);
 printf("Value stored in p : %d",*p);

 // sum of two number using pointer

 int n1 = 10 ,n2 =20 ,sum;
 int *x,*y,*z;
 x = &n1;
 y = &n2;
 z = &sum;

 *z=*x+*y;

 printf("\nsum of %d + %d is : %d",*x,*y,*z);

}
