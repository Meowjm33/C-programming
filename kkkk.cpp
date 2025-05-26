#include<stdio.h>
void pass()
{
	int a=5;
	a++;
	printf("value of a:%d\n",a);
	printf("the address of a: %d\n",&a);
}
int main(){

	pass();//here the memory location can be same and different too depends on complier and program
	int b=10;
	printf("THE value of b:%d\n",b);
	pass();//"
	pass();//"
}
