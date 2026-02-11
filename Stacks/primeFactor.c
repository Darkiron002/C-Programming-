#include<stdio.h>
#include<stdlib.h>
// Prime factorization program
#define MAX 10
int stack_arr[MAX];
int top =-1;
//push
void push(int data){
    if(top == MAX){
        printf("Overflow");
        return;
    }
    top++;
    stack_arr[top]= data;
}
//pop
int pop(){
    if(top == -1){
        printf("underflow");
        exit(1);
    }
    int value = stack_arr[top];
    top--;
    return value;
}
//Prime factorization function
void prime(int num){
    int i =2;
    while(num!=1){
        while(num% i == 0){
            push(i);
            num = num/i;
        }
        i++;
    }
}
//print
void print(){
    while(top != -1){
        printf("%d ", pop());
    }
}
int main(){
    prime(450);
    print();
    return 0;
}