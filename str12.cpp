#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={};
	int i,l,c=0;
	printf("enter the string :  ");
	scanf("%[^\n]s",&c1);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if (c1[i]==' '){
			if(c1[i+1]=='t' && c1[i+2]=='h' && c1[i+3]=='e')
			c+=1;
		}	
	}
	printf("%d",c);
}
