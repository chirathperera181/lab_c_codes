#include<stdio.h>
int main(){
	char ch;
	int count=0;
	printf("Type in a line of text\n");
	while ((ch=getchar()) !='\n'){
	if(ch==' ')
		count++;
	}
	printf("Number of spaces=%d\n",count);
return 0;
}
