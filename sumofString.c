#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[]="124259";
    int n =0;
    int sum=0;

    for(int i=0;i<num[i]!='\0';i++) // '\0'-null terminator
    {
        n=num[i]-'0';
        sum+=n;
    }
      printf("%d\n",sum);


}
