#include<stdio.h>
///Function Definition
void iamfine();
void weather(){
	printf("today is such a chilly day >.<\n");
}
int main()
{ int a=5;/// here a=5 and a=9 are different because main function and iamfine function are different function!!!!
	printf("i am fine !!\n");
	iamfine();///Function Call
	weather();///function call
	printf("%d\n",a);
	return 0;
}
void iamfine(){
	int a=9;
	printf("%d\n",a);
	printf("how about you?\n");
}
