#include <stdio.h>
#include <stdlib.h>

// Simple function (fn1)

void print()
{
    printf("\nSay Hello\n");
}

// Function with parameter (fn2)

void param(char name[])
{
    printf("\nmy Name is %s\n",name);
}

// square root of a number (fn3)

void sqrt(int n1)
{
   printf("Square root of %d is : %d \n",n1,n1*n1) ;
}

// function with return (fn4)

int sum()
{
    int sum =0;
    sum = 10 + 20 ;
    return sum;
}

// return statement and argument (fn5)

 int findCube(int num)
 {
     int cube = num*num*num;
     return cube;
 }
int main()
{
    printf("\nFunction 1");
    print();

    printf("\nFunction 2");
    param("sooraj");// "Sooraj" - Argument

    printf("\nFunction 3");
    int num;
    printf("\nEnter number :\n");
    scanf("%d",&num);
    sqrt(num);

    printf("\nFunction 4");
    int res = sum();
    printf("\nSum is : %d\n",res);

    printf("\nFunction 5");
    int n ;
    printf("\nEnter the number :\n");
    scanf("%d",&n);
    printf("Cube root of %d is : %d",n,findCube(n));

}


