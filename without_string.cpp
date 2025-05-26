///WAP to find the length of the string with out using library function strlen()
#include<stdio.h>
#include<conio.h>
int main(){
	char s[100];
	int i=0;
	printf("enter the string:\n");
	gets(s);
	while(s[i]!=0){
		i++;
	}
	printf("length= %d",i);/// yesma count ra i ko value '0' cha so yo program ma count na lekheni kei bhayena
	return 0;
}
