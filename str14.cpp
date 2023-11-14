#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char c1[1000]={},vo[6]={'a','e','i','o','u'};
	int i,l,d=0,v=0,c=0,s=0;
	printf("enter the string :  ");
	scanf("%[^\n]s",&c1);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if (48<=c1[i] && c1[i]>=58)
		d+=1;
		else if (c1[i]==' ')
		s+=1;
		else{
		for (int j=0;j<5;j++){
		if (c1[i]==vo[j])
		v+=1;
		else
		c+=1;}
			}
		}
	printf("%d %d %d %d",v,c,d,s);
}
