#include<stdio.h>
#include<conio.h>
 int  main(){
	int s,r,a;
	printf("enter a no");
	scanf("%d",&a);
	while (a>0)
	{
		r=a%10;
		s=s+r;
		a=a/10;
	}
	printf("the sum of digits is %d",s);
}
