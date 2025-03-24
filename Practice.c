#include <stdio.h>

int main() {
    // Write code here
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++) {
        if (i % 5 == 0 ||i % 7 == 0) continue;
        printf("%d \n",i);
    }
    return 0;
};