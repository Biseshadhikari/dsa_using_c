#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
traverse(struct node*head){
	struct node* ptr;
	ptr= (struct node*)malloc(sizeof(struct node));
	ptr = head;
	while(ptr!=NULL){
		printf("The elements are %d\n",ptr->data);
		ptr = ptr->next;
	}
}

int main(){
	struct node* head,*newnode,*temp;
	head = NULL;
	int choice;
	do{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		
		if (head ==NULL){
			head = newnode;
			temp = head;
		}
		else{
			temp->next = newnode;
			temp= temp->next;
		}
		printf("enter your choice(0,1)");
		scanf("%d",&choice);
	}
	while(choice==1);
	printf("Before inserting at beginning\n");
	
	traverse(head);
	

