#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	
};
struct node* createcll(){
	struct node* head,*newnode,*tail;
	int choice;
	head = NULL;
	do{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		
		if(head == NULL){
			head = newnode;
			tail = head;
		}
		else{
			tail->next = newnode;
			tail=tail->next;
			
		}
		tail->next = head;
		printf("Enter the choice(0,1)\n");
		scanf("%d",&choice);	
	}  
	while(choice==1);
	return tail;
}
//int main(){
//	struct node*tail;
//	tail = createcll();
//	traverse(tail);	
//}
struct node* insertatbeg(struct node*tail)
{
	struct node* newnode;
	newnode =(struct node*)malloc(sizeof(struct node));
	printf("Enter the at beginning data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	
	if(tail==NULL){
		tail = newnode;
		tail->next = newnode;
		
		
	}
	else{
		newnode->next = tail->next;
		tail->next = newnode;
		
		  
	}
	return tail;
}
traverse(struct node* tail){
	struct node* ptr;
	ptr = tail->next;
	do{
		printf("The elemetns are %d\n",ptr->data);
		ptr = ptr->next;
	}while(ptr!= tail->next);
}

struct node* insertatend(struct node* tail){
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data at end\n");
	scanf("%d",&newnode->data);
		
	if (tail == NULL){
		tail = newnode;
		tail->next = newnode;
	}
	else{
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
		
	}
	return tail;
}
struct node* insertatbetween(struct node* tail,int index){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node*ptr1;
	
	printf("Enter the data at between \n");
	scanf("%d",&ptr->data);
	
	if (tail == NULL){
		tail = ptr;
		tail->next = ptr;
		
	}
	else{
		int i =1;
		ptr1= tail->next;
		while (i!=index-1){
			ptr1 = ptr1->next;
			i++;
		}
		
		ptr->next = ptr1->next;
		ptr1->next = ptr;
		
	}
	return tail;
	
}

int main(){
	struct node*tail;
	
	tail = createcll();
	printf("Before insertion at end\n");
	traverse(tail);
	
//	printf("After the insertion at beginning\n");
//	tail = insertatbeg(tail);
//	traverse(tail);
 
//	printf("After the insertion at end\n");
//	tail = insertatend(tail);
//	traverse(tail);
	
	printf("After the insertion at end\n");
	tail = insertatbetween(tail,2);
	traverse(tail);
	
	

	
}
