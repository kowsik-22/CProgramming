#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("The greatest number is %d",a);
	else if (c>a && c>b)
	printf("The greatest number is %d",c);
	else
	printf("The greatest number is %d",b);
	return 0;
}
