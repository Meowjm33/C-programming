#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("enter the string \n");
	scanf("%s",a);
	char b[20];
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("it is palindrome");
	}
	else{
		printf("it isn't palindrome");
	}
	return 0;
}
