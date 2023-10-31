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
	for (int i=0;i<n;i+=2)
	{
		a=ar[i];
		ar[i]=ar[i+1];
		ar[i+1]=a;
	}
	for (int i=0;i<n;i++)
	printf("%d ",ar[i]);
	
}
