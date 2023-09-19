#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter the points ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("The technique with maximum points is A");
	else if (c>a && c>b)
	printf("The technique with maximum points is C");
	else if (a==b && b==c)
	printf("All techniques have equal points");
	else
	printf("The technique with maximum points is B");
	return 0;
}
