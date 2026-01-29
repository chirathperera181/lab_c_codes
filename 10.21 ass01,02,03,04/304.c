#include<stdio.h>
int main(){
	int integer=9876;
	float decimal=987.6543;
	printf("4 digit interger right justified to 8coloumn:%8d\n",integer);
	printf("4 digit integer right justified to 5column:%5d\n",integer);
	printf("Floating point number rounder to 2digits:%2f\n",decimal);
	printf("Floating point number rounded to0 digits:%f\n",987.6543);
	printf("Floating point number in exponential form:%e\n",987.6543);
return 0;
}
