#include <stdio.h>
	int main(){
	int i,x,y;
		do {
		printf("calculator Menu \n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Divion\n 5.Exit\n");
		printf("Enter Your choice:");
		scanf("%d",&i);
		printf("Enter the first value:");
		scanf("%d",&x);
		printf("Enter the second value:");
		scanf("%d",&y);
		if (i == 1) {
		printf("Your answer is=%d\n",x+y);
		}
		if (i == 2) {
		printf("Your answer is=%d\n",x-y);
		}
		if (i == 3) {
		printf("Your answer is=%d\n",x*y);
		}
		if (i == 4) {
		printf("Your answer is=%d\n",x/y);
		}
		} 
		while (i != 5);
		printf("now you are exit\n");
return 0;
}
