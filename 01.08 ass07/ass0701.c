#include<stdio.h>
int cube(int c);
int main(void){
		int x,y;
		int v;
		printf("Enter value for X:\n");
		scanf("%d",&x);
		printf("Enter value for Y:\n");
		scanf("%d",&y);
		printf("X = %d\n",x);
		v = cube(x);
		printf("Now X = %d\n\n",v);
		printf("Y = %d\n",y);
		v = cube(y);
		printf("Now Y = %d\n\n",v);
		return 0;
}
int cube(int c){
	return (c*c*c);
}
