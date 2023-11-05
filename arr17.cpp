#include <stdio.h>
int main()
{
	int n,i,a,b;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n], pass[n]={};
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	
	for (i=0;i<n;i++){
		if (pass[i]==0)
		{
			int c=1;
			for (int j=i+1;j<n;j++)
			{
				if(ar[i]==ar[j])
				{
					c++;
					pass[j]=1;
				}	
			}
			printf("%d: %d",ar[i],c);
		}
	}
}
