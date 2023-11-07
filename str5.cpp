#include <stdio.h>
#include <string.h>
int main()
{
	char c[1000]={},k;
	int i=0,l;
	printf("enter a string:  ");
	scanf("%s",&c);
	l=strlen(c);
	printf("reversed string: ");
	while (c[i]!=0){
	k=c[i];
	c[i]=c[l-1-i];
	c[l-1-i]=k;
	i++;
	}
	printf("%c",c);
}

