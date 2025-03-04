#include <stdio.h>

void printTable(int n);  // Function prototype
int main() {
	int n;
	printf("Enter the number to print the table: ");
	scanf("%d", &n);
	printTable(n);       // Argument/ actual parameter
	return 0;
}
void printTable(int n) {  // Parameter/ formal parameter
	int i;
	for(i=1; i<=10; i++) {
		printf("%d \n ", n*i);
	}
}