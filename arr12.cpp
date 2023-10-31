#include <stdio.h>
int main()
{
	int n,i,a,chk[10000]={};
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	for (i=0;i<n;i++){
		if (chk[ar[i]]==1)
		chk[ar[i]]=2;	
		else if (chk[ar[i]]==0)
		chk[ar[i]]==1;	
	}
	for (i=0;i<n;i++){
		if (chk[ar[i]]==1){
		printf("first non repeating element: %d",ar[i]);
		break;}
	}
	
	

	
	
}
