/// WAP to to read 3*3 matix of integer and find largest no of each row and display.
#include<stdio.h>
int main(){
	int i,j,a[3][3],l;
	printf("enter the elements of a matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
	    l=0;
		for(j=0;j<3;j++){
		
			if(a[i][j]>l){
				l=a[i][j];
			}
		
		}
		printf("the largest no is: %d\n", l);
	}
	
	return 0;
}
