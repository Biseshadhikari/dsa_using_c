#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* previous;
	struct node* next;
};
traverse(struct node* head){
	struct node*ptr;
	ptr = head; 
	while (ptr!=NULL){
		printf("The elements are %d \n",ptr->data);
		ptr = ptr->next;
	}
}
struct node* create(){
	struct node *head,*newnode,*temp;
	int choice;
	head = NULL;
	do{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the elements\n");
		scanf("%d",&newnode->data);
		
		if (head == NULL){
			head = newnode;
			temp  = newnode;	
		}
		else{
			temp->next = newnode;
			newnode->previous = temp;
			temp = temp->next;
			
		}
		printf("Enter your choice(0,1)");
		scanf("%d",&choice);
		
	}
	while(choice==1);
	return head;
}

int main(){
	struct node*head;
	head = create();
	
	traverse(head);
}
