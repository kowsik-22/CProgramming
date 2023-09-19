#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		s+=1;
		
	}
	printf("Length of number is %d",s);
	
}
