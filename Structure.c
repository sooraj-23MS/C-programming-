#include <stdio.h>
#include <stdlib.h>

struct studentDetails{
 char name[10];
 int age;
};
int main()
{

struct studentDetails sd[2];
for(int i=0;i<2;i++){
printf("\nEnter the details of student %d :",i+1);
printf("\nEnter student name :");
scanf("%s",sd[i].name);
printf("Enter student age :");
scanf("%d",&sd[i].age);
}
for(int i=0;i<2;i++){
printf("\nDetails of student %d :",i+1);
printf("\nstudent name is : %s",sd[i].name);
printf("\nstudent age is : %d\n",sd[i].age);
}
}
