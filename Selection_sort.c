#include<stdio.h>
#include<stdlib.h>

//Selection sort 
void selectionSordt(int arr[],int n){
    for(int i=0; i<n;i++){
        int min = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i]= arr[min];
        arr[min]= temp;
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
    selectionSordt(arr,5);
    printarr(arr,5);

    return 0;
}