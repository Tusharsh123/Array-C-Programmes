#include<stdio.h>
void reverse(int *arr, int n)
{
    int s =0;
    int e =0;
    while(s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the elements of the array: ");
    int arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);

    printf("After reversal, the elements of the array are: ");
    for(int i =0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    
}






