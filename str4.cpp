#include <stdio.h>
#include <string.h>
int main()
{
	char c[1000],r[1000];
	int n,i=0;
	printf("enter a string:  ");
	scanf("%s",&c);
	for(i=0;i<strlen(c);i++){
	c[i]=c[i]-32;
	printf("%c",c[i]);}
	}

