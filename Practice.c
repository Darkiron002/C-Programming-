#include <stdio.h>
int sum(int n);

int main() {
	printf("sum is : %d", sum(5));
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	int sumNm1 = sum(n - 1);
	return n + sumNm1;
}