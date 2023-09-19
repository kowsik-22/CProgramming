#include <stdio.h>
#include <math.h>
int main()
{
	int b,r;
	float s;
	printf("Enter the basic salary ");
	scanf("%d",&b);
	printf("Enter the Region [1:Metro, 2:T1, 3:T2, 4:T4] ");
	scanf("%d",&r);
	if (r==1)
	s=b+(0.83*b);
	else if (r==2)
	s=b+(0.8*b);
	else if (r==3)
	s=b+(0.72*b);
	else
	s=b+(0.68*b);
	printf("The final salary is %f",s);
	return 0;
}
