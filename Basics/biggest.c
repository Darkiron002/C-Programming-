#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the values of a: ");
  scanf("%d", &a);
  printf("Enter the values of b: ");
  scanf("%d", &b);
  printf("Enter the values of c: ");
  scanf("%d", &c);
  if (a > b && a > c) {
    printf("a is the largest number \n");
  } else if (b > a && b > c) {
    printf("b is the largest number \n");
  } else {
    printf("c is the largest number \n");
  }
  return 0;
}