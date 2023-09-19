#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d",0);
	while (n!=0)
	{
		i=n%2;
		n=n/2;
		printf("%d",i);
	}
}
