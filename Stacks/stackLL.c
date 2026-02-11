#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* top= NULL;//global top pointer 

//isEmpty function
int isEmpty(){
    if(top == NULL){
        return 1;
    }else return 0;
}


//push
void push(int data){
    node* temp = malloc(sizeof(node));
    if(temp == NULL){
        printf("stack overflow");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    temp->next = top;
    top = temp; 
}
//pop
int pop(){
    node* temp ;
    temp = top;
    if(isEmpty()){
        printf("stact underflow");
        exit(1);
    }
    int val= temp->data;
    top = temp->next;
    free(temp);
    temp = NULL;
    return val;
}
//pirnting
void print(){
    node* temp ;
    temp = top;
    while(temp){
        printf("%d ", temp->next);
        temp = temp ->next;
    }printf("\n");
}


int main(){
    int choice, data;
    while(1){
        printf("1. push\n");
        printf("2. print\n");
        printf("3.pop\n");
        printf("4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the data that your want ot push- ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            printf("Your stack is - ");
            print();
        case 3:
            pop();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice pick again .");
            break;
        }
    }
    return 0;
}