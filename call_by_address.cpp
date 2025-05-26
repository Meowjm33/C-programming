#include<stdio.h>
void arrow( int *a){
	printf("%d\n",*a);
	printf("%d\n",a);//here it is the memory address of 'a'
	*a=10;
	printf("%d\n",*a);
}
int main(){
	int p=5;
	arrow(&p);
	printf("value of a is: %d",p);
	return 0;
	
}
