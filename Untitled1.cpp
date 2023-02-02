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
struct node*insertatbetween(struct node*head ,int index){
	struct node* ptr,*ptr1;
	ptr1= head;
	ptr = (struct node*)malloc(sizeof(struct node));
	int i =0;
	while(i!=index-1){
		ptr1=ptr1->next;
		i++;
	}
	
	ptr->data =6;
	ptr->next = ptr1->next;
	ptr1->next = ptr;
	return head;
}
struct node* insertatend(struct node*head){
	struct node* ptr,*ptr1;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr1 = head;
	while(ptr1->next != NULL){
		ptr1 = ptr1->next;
	}
	ptr->data = 3;
	ptr1->next = ptr;
	ptr->next = NULL;
	return head;
	
}
struct node* insertatbeginning(struct node*head){
	struct node* ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = 2;
	ptr->next = head;
	head = ptr;
	return ptr;
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
	
//	printf("After inserting at beginnning\n");
//	head = insertatbeginning(head);
//	traverse(head);	
	
//	printf("After inserting at end\n");
//	head = insertatend(head);
//	traverse(head);
	
	printf("After inserting at between\n");
	head = insertatbetween(head,2-1);
	traverse(head);
}
