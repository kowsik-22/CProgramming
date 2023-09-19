#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=0,a=0,b=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (i<n)
	{
		s=a+b;
		a=b;
		b=s;
		i++;
	}
	printf("The nth fibanoci number is %d",a);
	
}
