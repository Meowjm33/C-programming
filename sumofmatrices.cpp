/// wap to add 2 matrices of size 2*2
#include<stdio.h>
int main()
{
	int i,j,a[2][2],b[2][2],s[2][2];
	printf("enter the elements of matrix A\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the elements of matrix B\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	 printf("adding two matrices\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	} printf("displaying the elements of the matrice safter addition is\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d\t",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
