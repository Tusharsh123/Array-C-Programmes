#include <stdio.h>
int sum(int n,int arr[],int i)
{
   
   if(i==n)
   return 0;
   else
   return arr[i]  + sum(n,arr,i+1);
}
 
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Sum of array is: %d",sum(size,arr,0));
 
    return 0;
}