#include<stdio.h>
#include<string.h>
int main(){
	char a[]="sunday monday";
	char b[20];
	strcpy(b,a);
	printf("%s\n",a);
	printf("%s\n",b);///strcpy() le aauta ko value aarko ma copy paste garcha!!!!!
	return 0;
}
