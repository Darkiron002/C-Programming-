#include <stdio.h>

void All_in_finction(int a, int b, int *sum , int *product, int *avag);

int main() {
	int a= 5, b= 10;
	int sum, product, avag;
	All_in_finction(a, b, &sum, &product, &avag);
	printf("Sum: %d\nProduct: %d\nAvag: %d\n", sum, product, avag);
	return 0;
}

void All_in_finction(int a, int b ,int *sum , int *product, int *avag) {
	*sum = a + b;
	*product = a * b;
	*avag = (a + b) / 2;
}