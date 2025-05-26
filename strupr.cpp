
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="Hello";

	printf(" the original name of a is %s\n",a);
	strupr(a);
	printf("after conversion, name: %s",a);
	return 0;
}

