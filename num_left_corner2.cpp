#include <stdio.h>
int main()
{
	int s,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<n)
	{ 
	for(s=0;s<1+i;s++)
	printf("%d ",s+1);
	}
	i++;
}
