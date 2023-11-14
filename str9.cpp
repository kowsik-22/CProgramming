#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},v[6]={'a','e','i','o','u'};
	int i=0,l;
	printf("enter the string :  ");
	scanf("%s",&c1);
	l=strlen(c1);
	for (i=0;i<l;i++){
		for (int j=0;j<5;j++){
			if (c1[i]==v[j])
			printf("%c",c1[i]);
		}	
	}
}
