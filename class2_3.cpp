#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	float b;
	printf("Enter the units of electricity ");
	scanf("%d",&a);
	if (a<=100)
	b=2*a;
	else if (100<a<250)
	b=3.5*a;
	else
	b=5*a;
	printf("The cost of electricity is %f",b);
	return 0;
}
