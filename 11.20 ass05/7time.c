#include<stdio.h>
int main()
{	int i;
	int n=1;
	printf("Enter an interger");
	scanf("%d",&i);
	while(n<12){
		printf("%d*",i);
		printf("%d=",n);
	/*	printf("%d");*/
		printf("%d \n",i*n);
		n++;
	}
	return 0;
}
