#include<stdio.h>
#include<string.h>
int main(){
	char fst[25],sec[25];
	char name[70];
	
	printf("Enter name 1:");
	scanf("%s",fst);
	
	printf("Enter name 2:");
	scanf("%s",sec);
	
	strcpy(name,fst);
	strcat(name," ");
	strcat(name,sec);
	printf("your full name :%s\n",name);
	printf("Length of your full name =%d\n",strlen(name));
	

return 0;
}
