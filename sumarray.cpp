///Wap to add the sum of elements of 2*3 matrix
#include<stdio.h>
int main(){
	int i,j,a[2][3],sum=0;
	printf("Enter elements \n");
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
		sum=sum+a[i][j];
	
		}
			
	}printf("%d\t",sum);
return 0;	
}
