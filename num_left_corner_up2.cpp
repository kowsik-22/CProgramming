#include <stdio.h>
int main()
{
	int s,k=1,n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",n);
	while (i<n)
	{ 
	for(s=0;s<n-i;s++)
	k+=s;
	printf("%d ",k);
	}
	i++;
	k+=i;
}
