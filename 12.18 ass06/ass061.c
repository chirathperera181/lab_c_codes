#include<stdio.h>
int main (){
	int marks[5];
	int i;
	int sum=0;
	float avg;
	for(i=0;i<5;i++){
		printf("Enter marks:%d",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+marks[i];
	}
	printf("\ntotal marks=%d",sum);
return 0;
}
