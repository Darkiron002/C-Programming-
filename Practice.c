#include<stdio.h>
int main () {
	int n;
	printf("Enter your Number: ");
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("your sum of the numbers is %d \n", sum);
	return 0;
}	 