#include<stdio.h>
int even(int num){
	if(num%2==0){
		return 1;}
		else {return 0;
		}
	}
		
int main (){
	int number;
	printf("Enter integer:");
	scanf("%d",&number);
	
	if(even(number)){
		printf("It is a even number\n");
		} else {printf("It is a odd number\n");
			}
	
	return 0;
}
