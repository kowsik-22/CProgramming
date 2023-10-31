#include <stdio.h>
int main()
{
	int n,i,a,s=0;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	for (int i=0;i<n;i++)
	{
		if (ar[i]>ar[i+1])
		{
			a=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=a;
		}
		s+=ar[i];
	}
	printf("Max is %d, Min is %d, Average is %d",ar[n-1],ar[0],s/n);
	
}
