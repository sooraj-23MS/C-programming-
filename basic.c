#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\nPrinting Statement : \n");
    printf("Hello world!\n"); // pRINTING Statement

    printf("\nPlaceHolder,Data types,Variables : \n");

    char name[] = "Sooraj"; // Data types char,int,double;
    int age = 23;
    double cgpa = 7.21;
    char grade = "c";
    printf("\nMy Name is %s M.S\n",name);   // s -  String
    printf("I am %d years old\n",age);      // d - integer;
    printf("My current cgpa is %f\n",cgpa); // f - Decimal
    printf("And my grade is %c\n",grade);   // c - char

    char course[5];
    int mob;
    double height;
    printf("\nEnter ur course : \n");
    scanf("%s",course);                     // User input
    printf("Enter ur Mob no :\n");
    scanf("%d",&mob);
    printf("Enter ur height :\n");
    scanf("%lf",&height);                   // lf - read double values

    printf("\nYour course : %s \n",course);
    printf("Your Mob no : %d\n",mob);
    printf("Your height : %f\n",height);

    // Calculator

    printf("\nCalculator\n");
    int num1,num2;
    char op;
    printf("\nEnter First number :\n");
    scanf("%d",&num1);
    printf("Enter Second number :\n");
    scanf("%d",&num2);
    printf("Operations + , - , * , /  :\n");
    scanf(" %c",&op);

    if(op=='+')
    {
        printf("\nResult is %d + %d = %d\n",num1,num2,num1+num2);
    }
    else if(op=='-')
    {
        printf("\nResult is %d - %d = %d\n",num1,num2,num1-num2);
    }
    else if(op=='*')
    {
        printf("\nResult is %d * %d = %d\n",num1,num2,num1*num2);
    }
    else if(op=='/')
    {
        printf("\nResult is %d / %d = %d\n",num1,num2,num1/num2);
    }
    else
    {
        printf("Invalid op");
    }


    // for loop

    printf("\n for loop :\n");
    int n;

    for(n=0;n<10;n++)
    {
        printf("%d\n",n);
    }


    //while loop

    printf("\nwhile loop :\n");
    int i;

    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }

    //do - while

    printf("\ndo while loop :\n");
    int n=0;

    do
    {
        printf("%d \n",n);
        n++;
    }while(n<=10);


    return 0;
}
