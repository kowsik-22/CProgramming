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
	int k=n;
	printf("Enter the value of k: ");
	scanf("%d",&t);
	while (k>0)
	{
		for (i=0;i<k;i++)
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
	printf("k th smallest number is: %d \n",ar[t-1]);
	printf("k th largest number is: %d",ar[n-t]);
}
