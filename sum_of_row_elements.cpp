/// wap to show the sum of the row elements of matrix
#include<stdio.h>
int main()
{
	int i,j,a[2][2],sum;//yo step ma sum=0 na gare ni huncha tara kei pharak pardaina na gare kina ki jasari pani pachi declare nai garna parcha
	printf("enter the elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		sum=0;  ///yo sum=0 garena bhane second row ko sum ma first row ko sum pani add bhayera aaucha!!!!
		for(j=0;j<2;j++)
		{
			sum=sum+a[i][j];
		} printf("\nthe sum of the row elements is %d",sum);
	}
return 0;
}
