#include<stdio.h>
int main() {
    // If the number is even the it'll show 1 else 0
    int num;
    printf("Enter your numner :");
    scanf("%d", &num);
    printf("%d", num % 2 == 0 );
    return 0; 
}