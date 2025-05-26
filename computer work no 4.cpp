#include<stdio.h>
#include<conio.h>
int main()
{
	int pal,a,n,r,rev=0;
	printf("enter a no\n");
	scanf("%d",&a);
	pal=a;
	while(a>0)
	{
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	if(rev==pal)
	{
		printf("it is palindrome");
	}
	else{
		printf("it isn't palindrome");
	}
	getch();
}
