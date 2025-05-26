#include<stdio.h>
int main(){
	int a=5;
	int *p;
	p=&a;
	printf("%d",p);//here we can use %u or %p instead of %d (for address)
}
