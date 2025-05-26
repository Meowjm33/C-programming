#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="hello";
	char b[]="world";
	strcat(a,b);
	printf(" after appending, the value of a is %s",a);
	return 0;
}

