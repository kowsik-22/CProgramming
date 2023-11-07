#include <stdio.h>
int main()
{
	char c[1000];
	int n,i=0;
	printf("enter a string:  ");
	scanf("%s",&c);
	while (c[i]>0){
		n+=1;
		i++;
	}
	printf("length of string is %d",n);
}
