/// WAP to swap the value of two no using call by value
#include<stdio.h>
void lol()
{
	int a,b,c;
	printf("enter the two no\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swapped values of a and b are : %d %d", a,b);
	
}
int main(){
	
	lol();
}
