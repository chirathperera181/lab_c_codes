#include<stdio.h>
int main(){
	int i,sum=0,max;
	printf("Please input number :") ;
	scanf("%d",&max);
	for (i=1;i<=max;i++){
	sum+=i;}
	printf("The sum is =%d",sum);
return 0;
}
