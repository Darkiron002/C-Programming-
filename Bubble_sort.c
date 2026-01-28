#include<stdio.h>
#include<stdlib.h>

//Bubble sort
void Buble_sort(int arr[],int n){
    for(int i =0; i<n;i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j] ;
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
// Printing of the array
void printarr(int arr[],int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[5]= {3,6,1,9,12};
    Buble_sort(arr,5);
    printarr(arr,5);

    return 0;
}