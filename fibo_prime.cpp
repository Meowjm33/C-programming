#include<stdio.h>
int main(){
	int a=0,b=1,c,n,i,count=0;
	printf("enter the nth term of fibonacci series\n");
	scanf("%d",&n);
	/*printf("%d%d",a,b);*/
	for(i=0; i<n-2; i++){
		c=a+b;
	/*	printf("%d",c);*/// yo chai fibonaci series print gar na bhaneko bhayera print na gareko!!!!!
		a=b;
		b=c;
	}
	for(i=1;i<=c;i++)
	{
		if(c%i==0)
		{
		count++;	
		}
	}
	
	if(count==2){
		printf("%d is prime no",c);
	}
	else{
		printf("%d is not a prime no",c);
	}
	
}
