#include <stdio.h>
int main()
{
	int n,i,a,s=0;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n],br[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	for (int i=0;i<n;i++)
	br[i]=ar[i];
	
	for (int i=0;i<n;i++)
	printf("%d",br[i]);
}
