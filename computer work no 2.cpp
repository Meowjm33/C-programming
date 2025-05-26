#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("enter a string\n");
	scanf("%s",a);
	int c;
	c= strlen(a);
	printf("the length of the string is:%d",c);
	return 0;
}
