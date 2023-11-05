#include <stdio.h>
int main()
{
	int n,i,a,j=0,k=0;
	printf("enter the number of values to be inputted: ");
	scanf("%d",&n);
	int ar[n], ev[n], od[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&a);
		ar[i]=a;
	}
	
	for (i=0;i<n;i++){
		if (ar[i]%2==0){
			ev[j]=ar[i];
			j++;
		}
		else{
			od[k]=ar[i];
			k++;
		}
	}
	printf("The Even elements are: \n");
    for(i=0;i<j;i++)
	printf("%d ",ev[i]);
	
    printf("The Odd elements are: \n");
    for(i=0;i<k;i++)
	printf("%d ", od[i]);
    printf("\n\n");	
}
