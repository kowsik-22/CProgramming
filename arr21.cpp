#include <stdio.h>
int main()
{
	int j,i,a[3][3];
	for (i=0; i<3;i++){
		for (j=0;j<3;j++){
			printf("enter the element A%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0; i<3;i++){
		for (j=0;j<3;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
}

}
