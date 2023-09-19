#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (i<=n)
	{
		s*=i;
		i++;
	}
	printf("The factorial of n is %d",s);
	
}
