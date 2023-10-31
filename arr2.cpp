#include <stdio.h>
int main()
{
	int n,i,a;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	int k=n;
	printf("Sorted array: ");
	while (k>0)
	{
		for (i=0;i<k-1;i++)
		{
			if (ar[i]>ar[i+1])
			{
				a=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=a;	
			}
		}
		k--;
	}
	for (int i=0;i<n;i++)
	printf("%d",ar[i]);
	
}
