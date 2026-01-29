#include<stdio.h>
int main(){
	int arr[10];
	int i,j,n = 0;
	int max=arr[0];
	for(i=0;i<10;i++){
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(j=1;j<10;j++){
		if(arr[j]>max){
			max=arr[j];
			n=j;
		}
	}
	printf("Largest number is =%d and its index is %d\n",max,n);	
return 0;
}
