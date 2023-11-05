#include <stdio.h>
int main()
{
	int n,i,a,v,p;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n-1;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	printf("enter value to insert: ");
	scanf("%d",&v);
	for (i=0;i<n;i++){
		if (<ar[i]);{
			p=i;
			break;
		}
		else
		p=i+1;
	}
	for (i=n+1,i>=p,i--)
	ar[i]=ar[i-1];
	ar[p]=v;
	
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);
}
