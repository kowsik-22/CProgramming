#include <stdio.h>
int main()
{
	int s,j,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<n)
	{ 
	for(s=0;s<i;s++)
	printf(" ");
	for(j=0;j<2*n-2*i-1;j++)
	printf("* ");
	}
	i++;
}
