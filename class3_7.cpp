#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	
}
