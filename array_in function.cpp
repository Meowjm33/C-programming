/*WAP to add the sum of elements of an array using function
     Passing 1-D Array To A function*/
#include<stdio.h>
void rojla(int a[]){
	int i,sum=0;
	for(i=0;i<5;i++){
		sum=sum+a[i];

	}
	printf("sum =%d",sum);
}
int main()
{
	int a[5]={1,3,5,7,9};
	rojla(a);
	return 0;
}
