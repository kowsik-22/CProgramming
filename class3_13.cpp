#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (n!=0)
	{
		i=n%10;
		s+=i;
		n=n/10;
	}
	printf("Sum of digits %d",s);
	
}
