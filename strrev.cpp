#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="hello";
	printf(" original %s\n",a);
	strrev(a);
	printf("the reversed name:%s",a);
	return 0;
}

