#include <stdio.h>
int main()
{
	int s,j,k,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<(2*n))                             
	{ 
	if (i<n)
	{
		for(j=0;j<i+1;j++)
		printf("* ");
		for(s=0;s<2*n-2*i-2;s=n*n)
		printf(" ");
		for(k=0;k<i+1;k++)
		printf("* ");  
	} 
	else
	{
		for(j=0;j<2*n-i;j++)
		printf("* ");
		for(s=0;s<2*i-2*n;s=n*n)
		printf(" ");
		for(k=0;k<2*n-i;k++)
		printf("* ");
	}
	i++;
	}
}
