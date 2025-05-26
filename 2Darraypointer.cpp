///WAP to find the sum of all elements of a 2*3 matrix(argument and return-type)i havE used it TwT
#include<stdio.h>
int bored(int a[][3])
{
	int i,j,sum=0;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
			sum=sum+a[i][j];
		}
	}
	return sum;
	
}
int main(){
	int i,j,a[2][3];
	printf("enter the elements of matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	bored(a);
	printf("the sum is: %d",bored(a));
}
