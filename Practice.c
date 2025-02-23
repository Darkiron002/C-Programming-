#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("Enter your number:");
    scanf("%d", &a);
    printf("Enter your number:");
    scanf("%d", &b);
    printf("Enter your number:");
    scanf("%d", &c);
    printf("The avarage of the numbers is : %d", (a+b+c)/3);
    return 0; 
}