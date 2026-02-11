#include<stdio.h>
#include<stdlib.h>
// class for circuly single linked list 
//nothing is much different than the last node will point to the head
typedef struct node{
    int data;
    struct node* next;
}node;
node* create(int data){
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->next= temp;
    return temp;
}
//insertion of nodes 
node* insertH(node* tail,int data){
    node* newP = malloc(sizeof(node));
    newP->data= data;
    newP->next= tail->next;
    tail->next = newP;
    return tail;
}
node* insertE(node*tail , int data ){
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    temp ->next = tail->next;
    tail->next = temp;
    tail= tail->next;
    return tail;
}
node* insertAny(node* tail,int pos, int n){
    node* p = tail->next;// head pointer
    //traversing to the part where we will insert 
    while(pos>1){
        p=p->next;
        pos--;
    }
    //creation of new node 
    node* temp = malloc(sizeof(node));
    temp->data= n;
    temp->next = NULL;
    //assigning all the pointer to the right one 
    temp->next = p ->next;
    p->next= temp;
    if(p == tail){
        tail= tail->next;
    }
    return tail;

}
//Deleation of nodes 
node* deleteH(node* tail){
    node* head = tail->next;
    tail->next = head->next;
    free(head);
    head = NULL;
    return tail;
}
node* deleteT(node*tail){
    node* temp = tail->next;
    while(temp->next != tail){
        temp= temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail= temp;
    return tail;
}
node* deleteAny(node*tail, int pos){
    node* temp = tail->next;
    // raching the previous node to nodeToDelete
    while(pos>2){
        temp=temp->next;
        pos--;
    }
    //creating a another pointer pointing to the nodeToDelete
    node* temp2 = temp->next;
    //pointing temp next to the next node after the nodeToDelete
    temp->next = temp2->next;
    free(temp2);
    temp2 = NULL;
    return tail;
}
// Function to count the no. of nodes in a Clinked list
void count(node* tail){
    node* temp= tail->next;
    int cnt = 0;
    do
    {
        cnt++;
        temp = temp->next;
    } while (temp!= tail->next);
    printf("The no of element/nodes in this linked list is - %d",cnt);
    
} 

//print 
void print(node* tail){
    node* p = tail->next;  
    do
    {
        printf("%d ", p->data);
        p =p->next;
    } while (p!= tail->next);
    

}

int main(){
    node* tail;
    tail = create(4);
    tail= insertH(tail,7);
    tail=  insertE(tail, 9);
    tail= insertAny(tail,2,6);
    tail = insertAny(tail,4,7);
    /*print(tail);
    printf("\n");
    tail = deleteH(tail);
    print(tail);
    printf("\n");
    tail = deleteT(tail);
    print(tail);
    printf("\n");
    tail= deleteAny(tail,2);
    print(tail);*/
    count(tail);
    return 0;
}