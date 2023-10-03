#include <stdio.h>
int main()
{
	int s,j,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<(2*n))                             
	{ 
	if (i<n)
	{
		for(s=0;s<i;s++)
		printf("* ");  
	} 
	else
	{
		for(s=0;s<n-i;s++)
		printf("* ");
	}
	i++;
	}
}
