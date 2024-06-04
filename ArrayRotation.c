#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5};
    int temp=0;
    int m =0;
    int n=5;
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<5;i++)
    {
        if(i==m)
        {
            temp=arr[i];
        }
        else if(i>m && i<n)
        {
            arr[i-1]=arr[i];
        }
    }
    arr[n-1]=temp;
    }

    for(int i=0;i<5;i++)
        {
        printf("%d\t",arr[i]);
    }

    return 0;
}
