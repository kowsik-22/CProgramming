#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},c;
	int i,l;
	printf("enter the string :  ");
	scanf("%s",&c1);
	l=strlen(c1);
	for(i=0;i<l+1;i++){
		if (c1[i]>c1[i+1]){
		c=c1[i];
		c1[i]=c1[i+1];
		c1[i+1]=c;
	}
			
	}
	printf("%s",c1);
}
