#include <stdio.h>
#include <string.h>
int main()
{
	char c[1000],r[1000];
	int l,i=0;
	printf("enter a string:  ");
	scanf("%s",&c);
	printf("copied string is: ");
	for(i=0;i<l+1;i++){
		if (c[i]!='\0')
		l++;
		else
		break;}
	for (i=0;i<l;i++)
	r[i]=c[i];	
	printf("%s",r);
}
