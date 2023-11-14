#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},c2[1000]={};
	int i=0;
	printf("enter the string :  ");
	scanf("%s",&c1);
	strcpy(c2,c1);
	strrev(c1);
	if (not(strcmp(c1,c2)))
	printf("palindrome");
	else
	printf("not palindrome");

}
