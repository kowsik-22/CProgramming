#include <stdio.h>
int main()
{
	int s,j,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<n)
	{ 
	for(s=0;s<n-i-1;s++)
	printf(" ");
	for(j=0;j<i+1;j++)
	printf("* ");
	}
	i++;
}
