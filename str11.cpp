#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},c;
	int i,l,p;
	printf("enter the string :  ");
	scanf("%[^\n]s",&c1);
	c1[0]=c1[0]-32;
	for(i=0;i<l;i++){
		if (c1[i]==' ')
		c1[i+1]-=32;
	}
	printf("%s",c1);
}
