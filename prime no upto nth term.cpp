#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the nth term");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		int count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%d\t",i);
		}
	}	
	return 0;
}
