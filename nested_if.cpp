#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("enter a positive no");
	scanf("%d",&a);
	if(a<=100)
	{
		if( a>50)
		{ printf("good score");	
		}
		else
		{printf(" low score"); 
		}
	}
	else{
		printf("it's too much score");
	}
	getch();
}
