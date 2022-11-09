#include <stdio.h>
count(int *a,int n)
{ 
    int i,c=0,j;
    for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		        }
	       }
 		}
         
   
          
    }
    return c;
     
 }
 
 
int main()
{
    int a[10000],b[10000],i,n,c;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    c=count(a,n);
    
	printf("duplicate numbers in the  array: %d",c);

     
	return 0;
}
