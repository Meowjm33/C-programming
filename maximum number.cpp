#include<stdio.h>
int main()
{
int i,a[5],max=0;
printf("enter 5 no");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			
		}
		}	
		printf("%d",max);
		return 0;
}
