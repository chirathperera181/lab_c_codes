#include <stdio.h>
void square(int num);

int main() {
	square(5);
	return 0;
}
void square(int num) {
	int result = num * num;
	printf("%d\n", result);
}
