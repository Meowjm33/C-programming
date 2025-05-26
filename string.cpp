#include<stdio.h>
int main()
{
	char a[100];
	printf("enter your name");
	fgets(a,100,stdin);
	printf(" name:%s",a);
	/// to store multiple words or sentences=> gets(string_name); (instead of scanf())>.<
/// but gets(); is not safeeeeeee so we should use fgets(string_name,nos_of_characters,stdin); (NOTE= sizeof(a) linu ra 100 linu eeutai huncha )
}
