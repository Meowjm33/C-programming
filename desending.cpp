#include<stdio.h>
int main(){
	int i,a[100],n,j,temp;
	printf("enter your choice of no : ");
	scanf("%d",&n);
	printf("Please enter the values for array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++){
	
	if(a[i]<a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
		}	
	}
	} printf("the descending order is \n");
	for(i=0;i<n;i++)
	{ printf("%d\t",a[i]);
	}
	return 0;
}
