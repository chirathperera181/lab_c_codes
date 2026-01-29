#include<stdio.h>
int largenum(int n1, int n2, int n3){
	int m=0;
	if(n1>n2 && n1>n3){
		m=n1;
		}
	else if(n2>n3){
		m=n2;
		}
	else{
		m=n3;
	}
		return m;
		
	
	
}
int main(){
		int  num[3];
	for(int i=0;i<3;i++){
	printf("Enter number %d :",i+1);
	scanf("%d",&num[i]);
	}
		
		
	printf("largest number is %d\n",largenum(num[0],num[1],num[2]));
	
return 0;
}
