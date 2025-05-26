#include<stdio.h>
#include<string.h>
int main()
{
char  b[100],count=0;
printf("enter a sentence");
fgets(b, sizeof(b), stdin);
int c,i;
 c=strlen(b);
 for(i=0;i<c;i++)
 {
 	if(b[i]=='a')/// strcmp chai aauta character ko lagi matra use hunna string ma matra use huncha 
	 {
 		count=count+i;
	 }
 }
 printf("The occurence of 'a' in the sentences is: %d",count);
 return 0;


}

