#include<stdio.h>
int nonRepeatingint(int a[],int n)
{
	int c,i,j,count=0;
	for(i = 0; i < n; i++)
    {
    	c=0;
	    for(j = 0; j < n; j++)
		{
			if(a[i]==a[j] && i!=j)
			{
				c++;
				break;
			}
		}
		if(c==0)
		{
			printf(" %d",a[i]);
			count=1;
		}
	}
	return count;
}
int main()
{
    int n,i,j,c,count=0;
    printf("\nEnter the number of elements in an array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements in an array :\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nNon repeating elements in an array :");
	count=nonRepeatingint(a,n);
	if(count==0)
		printf("\nThere are no Non repeating elements in an array ");
    return 0;
}