#include<stdio.h>
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int v,found;
	printf("Enter value to search :");
	scanf("%d",&v);
	for(i=0;i<10;i++){
		if(v==arr[i]){
		found=1;
		break;
		}
	}
	if(found)
		printf("\n%d Found at index %d\n",v,i);
		else printf("Not found %d",v);
return 0;
}
