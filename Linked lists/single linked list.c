#include<stdio.h>
#include<stdlib.h>

struct node{   //create a struct with a data part and a linked part 'next' using pointers
	int data;
	struct node*next;
};
typedef struct node NODE;
NODE*head = NULL;  //take head as a NODE but it's an empty node

//insert at beg
void IBEG(){
	NODE*newNode = NULL;    //node declaration
	newNode=(NODE*)malloc(sizeof(NODE));  //node creartion 
	printf("Enter the data:");    //data input
	scanf("%d", &newNode->data);
	newNode->next=NULL; //newNode stores NULL value in NEXT part
	if(head==NULL)
	{
		head=newNode;    //head= null, newNode is the first node
	}
	else
	{
		newNode->next=head; //head stores the address (newNode->next) 
		head=newNode;
	}
}
//insert at end
void IEND(){
	NODE*newNode = NULL;    //node declaration
	newNode=(NODE*)malloc(sizeof(NODE));  //node creartion 
	printf("Enter the data:");    //data input
	scanf("%d", &newNode->data);
	newNode->next=NULL; //newNode stores NULL value in NEXT part
	
	NODE*temp=head; //take a empty node name temp
	
	if(head==NULL)
	{
		head=newNode;
	}
	else{
		while(temp->next!=NULL) //here we are checking the address untill its NUll, though as a pointer TEMP always stores address
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
//insert at Any
void IANY()
{	//***till now there's no checker so we can't input a position which is not already address to the main ll***
	int p,i; //let suppose the position is 4
	printf("Enter the position you want to insert the node:");
	scanf("%d", &p);
	NODE*temp=head;
	if(p==1){
		IBEG();
	}
	else{
		NODE*newNode;    
		newNode=(NODE*)malloc(sizeof(NODE)); 
		printf("Enter the data:");  
		scanf("%d", &newNode->data);
		newNode->next=NULL; 
		for(i=0;i<p-2;i++) //check till the last 2 nodes the position, means p-2= 4-2= 2
		{
			temp=temp->next;
		}
		
		newNode->next=temp->next; // the next part of the 3rd node now till point to the next part of the new address
		temp->next=newNode; //3rd nodes next node mean the 4th node is now the newnode
	}
}
//Delete at Beg
void DBEG(){
	NODE*temp=head;
	if(head==NULL){
		printf("No deletion can be performed!\n");
	}
	else{
		temp=head; //temp stores the value of head
		head=head->next; //now head or temp points the first NODE which we'll have to delete
		free(temp); //delete the NODE using the free() function
	}
}

//Delete at End
void DEND(){
	NODE*temp=head;
	if(head->next==NULL){
		DBEG();   //here's the condition is for 0 node in LL or 1 node in LL
	}
	else{
		while(temp->next->next!=NULL){  //we'll check till the 3rd last node of the LL
			temp=temp->next; //let's assume that the temp has reached at the correct position
		}
		free(temp->next); //here the temp is pointing the 2nd last node and temp->next pointing the last node...hence it deletes the last node from the Linked list
		temp->next = NULL; //now set the 2nd last node in the LL as NULL 
	}
}

//Delete at Any 
void DANY(){
	int p, i;
	printf("Enter the position:");
	scanf("%d", &p);
	NODE*temp=head;
	NODE*del;
	if(p==1){
		DBEG();
	}
	else{
		for(i=0;i<p-2;i++){
			temp=temp->next; //let's suppose we'll delete the 4th position, so we'll stop at the 2nd position
		}
		del=temp->next; //here the del is pointing the 3rd position
		temp->next=temp->next->next; //now the temp->next is pointing the 4th position through the 'temp->next->next' command....which we're wanting to delete
		free(del);
	}
}

//Search a node in LL
void SEARCH(){
	int src, c=0;
	printf("Enter the data you want to search: ");
	scanf("%d", &src);
	NODE*temp=head;
	
	while(temp!=NULL)
	{
		if(temp->data==src)
		{
			c++;
		}
		temp=temp->next;
	}
	
	if(c>=1)
	{
		printf("\n%d is present in the linked list.\n");
	}
	else{
		printf("Data is not present in the list!\n");
	}
}

//DISPLAY
void display(){
	NODE*temp=head;
	if(head==NULL){
		printf("No Node in the Linked List.\n");
	}
	else{
		while(temp!=NULL){  //here we are checking the data part of the node and printing the data,
		// temp as null NODE store each data of the NODES and print them
		//the while loop runs untill the TEMP node points a NULL address......means temp runs using address but stores the data of the nodes***
		
			printf("  %d",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}

main()
{
	int ch;
	while(1){
		printf("Enter your choice:\n 1.Insert at BEG:\n 2.Insert at END:\n 3. Insert at ANY(position that is already aquired):\n 4:Delete at BEG:\n 5.Delete at END:\n 6.Delete at ANY:\n 7.Searching an Element:\n 8.Display:\n 9.Reverse the Linked List:\n 10: Exit.\n");
		scanf("%d", &ch);
		switch(ch){
			case 1: IBEG();
				break;
			case 2: IEND();
				break;
			case 3: IANY();
				break;
			case 4: DBEG();
				break;
			case 5: DEND();
				break;
			case 6: DANY();
				break;
			case 7: SEARCH();
				break;
			case 8: display();
				break;
			case 9: //REVERSE();
				break;
			case 10: exit(1);
				break;
			default: printf("Invalid function.\n");
		}
	}
}
