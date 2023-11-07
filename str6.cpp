#include <stdio.h>
#include <string.h>
int main()
{
	char c1[1000]={},c2[1000]={};
	int i=0,k=0,p=0,j=0;
	printf("enter a string1 :  ");
	scanf("%s",&c1);
	printf("enter a string2 :  ");
	scanf("%s",&c2);
	while (c1[i]!=0 && c2[j]!=0){
		if (c1[i]!=c2[j])
		p=1;
		i++; 
		j++;
	}
	if (not p)
	printf("equal strings");
	else
	printf("not equal");
}
