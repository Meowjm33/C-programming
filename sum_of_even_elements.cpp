#include<stdio.h>
int main()
{
	int i,j,sum=0,a[2][3];
	printf("enter the elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("the sum is %d",sum);
	return 0;
}
