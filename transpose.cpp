///WAP to find the transpose of a given matrix 
#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[3][2];
	printf("enter the elements of the matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
