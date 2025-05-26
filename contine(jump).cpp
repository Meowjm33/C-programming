#include<stdio.h>
int main(){
	int i;
	for(i=1; i<=5; i++){
		if(i==3){
			continue;/*"continue" ma chai tei condition correct bhayo bhane loop banda hudaina just tei condition lai ignore hanera feri loop continue huncha*/
		}			
		printf("%d ",i);
	}
	return 0;
}

