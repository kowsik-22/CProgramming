#include <stdio.h>
int main()
{
	int n,i,a,t;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	int k=0;
	printf("Enter the value of k: ");
	scanf("%d",&t);
	for (int i=0;i<n;i++)
	{
		if (ar[i]==t)
		k+=1;
	}
	printf("The number of times %d appears in the array is %d",t,k);
}
