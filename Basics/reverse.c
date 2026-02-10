#include <stdio.h>
int main () {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  int reversed, remainder;
  
  reversed = 0;
  remainder = 0;
  while (a != 0) {
    remainder = a % 10;
    reversed = reversed * 10 + remainder;
    a /= 10;
  }
  printf("Reversed number is: %d \n", reversed);
  return 0;
  
}