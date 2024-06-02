#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arr[]={10,20,30,40,50,60}; // Array
    int size = sizeof(Arr)/sizeof(Arr[0]); // Size of the array
    printf("Size of the array : %d\n",size);

 // Print array elements

 for(int i =0;i<size;i++)
 {
   printf(" %d ",Arr[i]);
 }

 //Total sum of the array

 int sum = 0;
 for(int i=0;i<size;i++)
 {
     sum += Arr[i]; // sum = sum + Arr[i];
 }
 printf("\nTotal sum : %d\n",sum);

 // User input Size & Elements

 int Arrsize;
 printf("\nEnter the size of array :\n");
 scanf("%d",&Arrsize);
 int Array[Arrsize];
 printf("Enter the elements :\n");
 for(int i=0;i<Arrsize;i++)
 {
     scanf("%d",&Array[i]);
 }
 printf("The array is :\n");
 for(int i=0;i<Arrsize;i++)
 {
     printf(" %d ",Array[i]);
 }

 // Replace the Elements (Arr)
 //int Arr[]={10,20,30,40,50,60};

 printf("\nExisting Elements :\n");
 for(int i =0;i<size;i++)
 {
   printf("  %d  ",Arr[i]);
 }
 printf("\nEnter new values :\n");
 for(int i=0;i<size;i++)
 {
     scanf("%d",&Arr[i]);
 }
 printf("Array with new elements :\n");
 for(int i =0;i<size;i++)
 {
   printf("  %d  ",Arr[i]);
 }
}
