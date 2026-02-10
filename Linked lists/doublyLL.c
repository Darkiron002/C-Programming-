#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    struct node* prev;
    int data;
    struct node* next;
} node;
// Add first node
node* addToEmpty(node* head, int data){
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}
// Insert at beginning
node* addBegining(node* head, int data){
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;

    if(head != NULL)
        head->prev = temp;

    return temp;
}
//insert at end
node* addLast(node* tail,int data){
    node* temp = malloc(sizeof(node));
    temp->data= data;
    temp->next= NULL;
    temp->prev = tail;
    if(tail!=NULL){
        tail->next = temp;
    }
    tail= temp;
    return tail;
}   
// insert at any postion
node* addAny(node* head, int position , int value){
    if(position ==1)return addBegining(head,value);
    node* ptr= head;
    int cnt = 1;
    while(cnt <position-1 && ptr != NULL){// checking if ptr is not null
        ptr = ptr->next;
        cnt++;
    }
    if(ptr == NULL){return head;}
    node* temp = malloc(sizeof(node));
    temp->data = value;
    temp->next = ptr->next;
    temp->prev= ptr;
    if(ptr->next!=NULL){
        ptr->next->prev = temp;
    }
    ptr->next = temp;
    return head;
}
// Delete first elemnt 
node* delFirst(node* head){
    node* temp = head;
    head = temp->next;
    free(temp);
    temp= NULL;
    head->prev =  NULL;
    return head;
}
//Delete the last element 
node* delLast(node* head){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* temp2 = temp->prev;
    temp2-> next= NULL;
    free(temp);
    temp = NULL; 
    return head ;
}


//printing of the nodes 
void printing(node* head){
    node* ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}



int main(){
    node* head = NULL;
    node* tail = NULL;
    node* ptr;

    head = addToEmpty(head, 15);
    tail = head;
    head = addBegining(head, 45);
    head = addBegining(head,65);
    tail = addLast(tail , 4);
    head = addAny(head,3, 7);
    head = delFirst(head);
    head = delLast(head);

    printing(head);
    return 0;
}
