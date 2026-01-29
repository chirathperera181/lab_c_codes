#include<stdio.h>
int main(){
	int i,f,x;
	int sum=0;
	do{
		printf("Enter value:\n");
		scanf("%d",&f);
		printf("initial value:%d\n",f);
		x=f%2;
		if(x==1){
			f=f*3+1;
		printf("next value is %d\n",x);
		}
		sum++;
		}
	while(i != 1);
	printf("\n");
return 0;
}
