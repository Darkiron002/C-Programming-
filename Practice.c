#include <stdio.h>

int sum(int a, int b);
int main() {
	int a, b;
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");	
	scanf("%d", &b);
	int s = sum(a, b);
	printf("Sum of %d and %d is %d\n", a, b, s);
	return 0;
}
int sum(int x, int y) {
	return x + y;
}