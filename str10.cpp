#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},c;
	int i,l,p;
	printf("enter the string :  ");
	scanf("%s",&c1);
	printf("enter the character :");
	scanf("%c",&c);
	printf("enter the index of character :");
	scanf("%d",&p);
	l=strlen(c1);
	for (i=0;i<l;i++)
	{
		if (i==p)
		{
			for (int j=l;j>i;j--)
			c1[j]=c1[j-1];
		}
	}
	c1[p]=c;
	printf("%s",c1);
}
