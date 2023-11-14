#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},c;
	int i,l,p=1;
	printf("enter the string :  ");
	scanf("%[^\n]s",&c1);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if (c1[i]==' ')
		p+=1;
	}
	printf("No of words is %d",p);
}
