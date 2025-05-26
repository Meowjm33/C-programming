#include<stdio.h>
void sleepy(int a, int b)
{
	printf("before swapping: a=%d\t b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping: a=%d\t b=%d",a,b);
}
int main(){
	int a=5,b=2;
	sleepy(a,b);
	return 0;
}
