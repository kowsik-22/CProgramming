#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=0,p;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	p=n;
	while (n!=0)
	{
		i=n%10;
		s=10*s+i;
		n=n/10;
	}
	if (s==p)
	printf("It is palidrome number");
	else
	printf("It is not palidrome number");
	
}
