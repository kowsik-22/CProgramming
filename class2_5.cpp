#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c)
	printf("All three numbers are equal");
	else
	printf("The numbers are not equal");
	return 0;
}
