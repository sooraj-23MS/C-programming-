#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp; // declare a file pointer
    char name[10];
    fp = fopen("sample.txt","w"); // open file named sample.txt in w-"write mode"
    printf("Enter name :"); // writing the file
    scanf("%s",name);
    fprintf(fp,"%s",name);
    fclose(fp);  // close file


    // Enter student details to a new file

    char fname[10];
    int age;
    FILE *p; // pointer
    p=fopen("studentDetails.txt","r"); // use "r" for 1st input and "a" for extra input to the same file
     printf("Enroll the details of student\n");
     printf("\nEnter name :");
     scanf("%s",fname);
     fprintf(p,"%s\t",fname); // write to the file
     printf("Enter age :");
     scanf("%d",&age);
     fprintf(p,"%d\n",age);
    fclose(p);

     // Read the text file

    FILE *p;
    char fname[10];
    int age;
    p = fopen("studentDetails.txt","r");
    while( fscanf(p,"%s  %d",fname,&age)!=EOF) // read from the file
    {
    printf("%s \t %d\n",fname,age);
    }
    return 0;

}
