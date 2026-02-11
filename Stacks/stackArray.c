#include<stdio.h>
#include<stdlib.h>
//Global Declearation of stack 
#define MAX 5
int stack_arr[MAX];
int top = -1;// global declearation of top variable
// Push function 
void push(int n){
    if(top == MAX-1){
        printf("The stack is full");
        return;
    }top++;
    stack_arr[top]= n;
}
//pop function of the stack
int pop(){
    if( top == -1){
        printf("Stack underflow");
        exit(1);
    }
    int value = stack_arr[top];
    top--;
    return value;
}
void print(){
    if(top == -1){
        printf("stack underflow");
        return;
    }
    for(int i = top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }printf("\n");
}

int main(){
    int choice, data;
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements\n");
        printf("5. Quit\n");
        printf("Please enter your choice:  ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter the number that you want ot push");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("your last inserted value is deleted.The element is - %d",data);
            break;
        case 3:
            printf("The top element of the stack is - %d",stack_arr[top]);
            break;
        case 4:
            print("The full view of the stack is -\n");
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong choice ");
        }
        
    }
    return 0;
}