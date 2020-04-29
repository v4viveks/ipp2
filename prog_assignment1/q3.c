#include <stdio.h>
int main()
{
	int i,n,arr[100],sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	printf("\n\nEnter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
		  	sum+=arr[i];
		}
	}
	printf("Sum of odd numbers is %d",sum);
}
