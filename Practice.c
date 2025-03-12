#include <stdio.h>
int main() {
	int *ptr;    //this is declearing that there are two veriables *ptr and x
	int x;
	ptr = &x;   //this means we are storing the address of x in the *ptr
	*ptr = 0;   //this means we are storing 0 in the address of x
	printf("x = %d\n", x);
	printf("*ptr = %d\n", *ptr);
	*ptr += 5 ;
	printf("x = %d\n", x);
	printf("*ptr = %d\n", *ptr);
	(*ptr)++;
	printf("x = %d\n", x);
	printf("*ptr = %d\n", *ptr);
	return 0;
}
