#include<stdio.h>
int main () {
	int num;
	int count=0;
	printf("Enter number :");
	scanf("%d",&num);
	while(num!=0){
		count++;
		num/=10;//num1=num/10;
		}
	printf("Total Digits:%d",count);
	return 0;
}

