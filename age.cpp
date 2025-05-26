#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("enter your age");
	scanf("%d", &a);
	if(a>=18)
	{
		printf("eligibale");
	}
	else{
		printf("not eligible");
	}
	getch();
}
