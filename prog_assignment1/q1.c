#include <stdio.h>
int main()
{
  int n,i,arr[100],sum;
  printf("Enter your number : ");
  scanf("%d",&n);
  arr[0]=0;
  arr[1]=1;
  sum=arr[0]+arr[1];
  for(i=2;i<n;i++)
  {
  	arr[i]=arr[i-1]+arr[i-2];
  	sum+=arr[i];
  }
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
  printf("\nsum : %d",sum);
  return 0;
}
