#include <stdio.h>

int counteven(int arr[],int n);
int main() {
    //Program to count the number of even numbers in an array
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    counteven(arr,10);
    printf("%d",counteven(arr,10));
    
    
    return 0;
}
int counteven(int arr[],int n) {
    int count = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    return count; 
}