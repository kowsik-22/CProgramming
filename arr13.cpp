#include <stdio.h>
int main()
{
	int n,i,a,b;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	printf("enter the sum: ");
	scanf("%d",&b);
	for (i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (ar[i]+ar[j]==b)
			printf("the pair is %d,%d \n",ar[i],ar[j]);
		}
	}
}
