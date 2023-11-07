#include <stdio.h>
#include <string.h>
int main()
{
	char c1[1000]={},c2[1000]={};
	int i=0,k=0;
	printf("enter a string1 :  ");
	scanf("%s",&c1);
	printf("enter a string2 :  ");
	scanf("%s",&c2);
	
	while(c1[i]!=0)
	i++;
	while(c2[k]!=0)
	c1[i++]=c2[k++];
	
	printf("%s",c1);
}
