#include<stdio.h>
int main(){
	int i;
	int *p; /*a pointer to an integer*/
	p=&i;
	*p=5;
	printf("%d%d\n",i,*p);
return 0;
}
