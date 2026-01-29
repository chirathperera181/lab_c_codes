#include<stdio.h>
#include<string.h>
int main(){
	char nlist[5][20],clist[20];
	int i,j,k;
	
	for(i=0,i<5,i++){
		printf("Enter name %d :",i+1);
		scanf("%s",%nlist[i]);
	}
	printf("\n name list\n");
	
	for(j=0,j<5,j++){
		printf("%s\t",nlist[j]);
	}
	printf("Enter name to check :");
	scanf("%s",cname);
	
	for(k=0,k<5,k++){
		if(strcmp(nlist[k],cname)==0
		{
			check=1;
			break;
			
	}
	


return 0;
}
