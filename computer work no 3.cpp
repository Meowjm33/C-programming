#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	char c[20];
	printf("enter the strings\n");
	scanf("%s%s%s",a,b,c);
	 strcat(a,b);
	printf("the result is %s\n",a);
	strlwr(c);
	printf("the lowercase is:%s\n",c);
	strupr(c);
	printf("the uppercase is:%s",c);
	return 0;
}
