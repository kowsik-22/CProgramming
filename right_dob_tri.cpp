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
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("* ");  
	} 
	else
	{
		for(s=0;s<2*n-i-1;s++)
		printf(" ");
		for(j=0;j>=n-i;j--)
		printf("* ");
	}
	i++;
	}
}
