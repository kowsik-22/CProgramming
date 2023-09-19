#include <stdio.h>
#include <math.h>
int main()
{
	int p,c,m,b,co,t;
	printf("Enter the physics marks ");
	scanf("%d",&p);
	printf("Enter the chemistry marks ");
	scanf("%d",&c);
	printf("Enter the maths marks ");
	scanf("%d",&m);
	printf("Enter the biology marks ");
	scanf("%d",&b);
	printf("Enter the computer marks ");
	scanf("%d",&co);
	t=(p+c+b+co+m)/5;
	if (p>=90)
	printf("The Grade obtained is A");
	else if (80<=p<90)
	printf("The Grade obtained is B");
	else if (70<=p<80)
	printf("The Grade obtained is C");
	else if (60<=p<70)
	printf("The Grade obtained is D");
	else if (40<=p<60)
	printf("The Grade obtained is E");
	else
	printf("The Grade obtained is F");
	return 0;
}
