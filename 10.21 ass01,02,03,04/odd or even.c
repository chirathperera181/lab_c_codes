#include<stdio.h>
int main()
{	int x;
	printf("Enter value:");
	scanf("%d,&x);
	
	if(x%2==0)
		printf("%d is an Even number",x)
	else
		printf("%d is an odd number",x)
	return 0;
}
