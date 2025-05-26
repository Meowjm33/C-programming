/// WAP to ask the user to choose a no and sort them by ascending order.
#include<stdio.h>
int main(){
	int i,a[100],n,j,temp;
	printf("enter your choice of no : ");/*choice halne ho*/
	scanf("%d",&n);
	printf("Please enter the values for array: ");/*choice aba 2 cha bhane 2 ota no input garene*/
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++){
	
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
		}	
	}
	} printf("the ascending order is \n");
	for(i=0;i<n;i++)
	{ printf("%d\t",a[i]);
	}
	return 0;
}
