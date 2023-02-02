#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* previous;
	
};

struct node* createdcll(){
	struct node* head,*newnode,*tail;
	head = NULL;
	int choice;
	do{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data in linked list\n");
		scanf("%d",&newnode->data);
		if (head = NULL){
			head = newnode;
			tail = head;
			head->previous = newnode;
			head->next = newnode;
		}
		else{
			newnode->previous = tail;
			tail->next = newnode;
			newnode->next = head;
			tail = newnode;
		}
		head->previous = tail;
		printf("Enter your choice(0,1)");
		scanf("%d",&choice);
		
	}
	while(choice ==1);
	return tail;
}
traverse(struct node*tail){
	struct node* ptr;
	ptr = tail->next;
	do{
		printf("The elements are %d \n",ptr->data);
		ptr = ptr->next;
		
	}
	while(ptr!=tail->next);
}

int main(){
	struct node*tail;
	tail - createdcll();
	
	traverse(tail);
	
}
