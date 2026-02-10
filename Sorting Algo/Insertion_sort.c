#include<stdio.h>
#include<stdlib.h>

//Insertion Sort 
void Insertion_sort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(j = i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }arr[j+1]= temp;
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
    Insertion_sort(arr,5);
    printarr(arr,5);

    return 0;
}