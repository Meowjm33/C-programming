

#include<stdio.h>


/// SUM OF NUMbers from 1 to N using recursion
///Factorial of a number using recursion 
int happy(int n){	
	
	if(n<=1){
		return 1;
	}	
	return n * happy(n-1); 
}

int main(){
	int N;
	printf("Enter a number: ");
	scanf("%d",&N);
	int fact=happy(N);
	printf("Factorial = %d",fact);	
	return 0;
}
