#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Normal str

    char s1[] = "Hello";
    char s2[10];
    printf("%s\n",s1);
    printf("\nEnter another str :");
    scanf("%s",s2);
    printf("\n%s %s\n",s1,s2);

    // str UPPERCASE || str LOWEERCASE

    char h1[]= "hello";
    char h2[] = "WORLD";
    printf("\nBefore :\n");
    printf("Str1 is %s\n",h1);
    printf("Str2 is %s\n",h2);
    printf("\nAfter :\n");
    printf("Str1 is %s\n",strupr(h1));
    printf("Str2 is %s\n",strlwr(h2));

    // String length

    char clgname[] = "_UIT_"; // _ = space is also included
    int len = strlen(clgname);
    printf("\nString is : %s\n",clgname);
    printf("\nString length is : %d\n",len);

    // str concatinate

    char clg[] = "_UIT_";
    char place[] = "_KJKM_";
    char concat[20];
    printf("\nString 1 is : %s\n",clg);
    printf("String 2 is : %s\n",place);
    strcat(clg,place); // clg <- place concate
    printf("\nString after concate is : %s\n",clg);

    // str copy

    char str1[] = "";
    char str2[] = "Hello";

    printf("\nstr1 is : %s\n",str1);
    printf("str2 is : %s\n",str2);
    strcpy(str1,str2);
    printf("\nNow str1 is : %s\n",str1);

    // str compare

    char name1[] = "Appu";
    char name2[] = "Ammu";
    printf("\nString  1 is : %s\n",name1);
    printf("String  2 is : %s\n",name2);
    int compare = strcmp(name1,name2);
    printf("\nString  same or not \n");
    if (compare == 0 )
    {
        printf("\nString  same\n");
    }
     else
     {
        printf("\nString not same\n");
     }

    // str reverse

    char rev[] = "MALAyalam";
    strrev(rev);
    printf("\nString is : %s\n",rev);
    printf("\nString in reverse : %s\n",rev);




}
