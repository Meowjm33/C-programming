#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],s=0,avg,i;
	printf("enter 10 different no");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++){
		s=s+a[i];
	} 
	avg=s/10;
	printf("sum=%d",s);
	printf("average=%d",avg);
	getch();
}
