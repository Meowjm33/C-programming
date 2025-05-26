//wap to swap (interchange) no by using Call By Reference
#include<stdio.h>
void lol(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("the swapped values are %d and %d", *x,*y);
}
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	lol(&a,&b);
}
