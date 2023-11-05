#include <stdio.h>
int main()
{
	int n,i,a;
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
		for (int j=0;j<n-i-1;j++){
			if (ar[j]>ar[j+1]){
				a=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=a;
			}
		}
	}
	for (i=0;i<n/2;i++){
		if (ar[i]==ar[n/2+i])
		printf("majority element is %d",ar[i]);
	}
	
}
