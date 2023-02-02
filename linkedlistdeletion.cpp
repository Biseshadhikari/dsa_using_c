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
struct node* deletatbetween(struct node* head,int index){
	struct node* ptr,*ptr1;
	ptr = head;
	ptr1=head->next;
	int i =0;
	while(i!=index-1-1)
	{
		ptr1 = ptr1->next;
		ptr =ptr->next;
		i++;
		
	}
	ptr->next = ptr1->next;
	free(ptr1);
	return head;
}


struct node* deletatend(struct node* head){
	struct node* ptr,*ptr1;
	ptr = head->next;
	ptr1 = head;
	while(ptr->next != NULL){
		ptr = ptr->next;
		ptr1 = ptr1->next;
	}
	ptr1->next = NULL;
	free(ptr);
	return head;
	
	
}
struct node* deletatbeginning(struct node* head){
	struct node* ptr;
	ptr = head;
	head = ptr->next;
	free(ptr);
	return head;
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
	printf("Before deletion at beginning\n");
	
	traverse(head);
	
//	printf("After deletion at beginning\n");
//	head = deletatbeginning(head);
//	traverse(head);

//	printf("After deletion at end\n");
//	head = deletatend(head);
//	traverse(head);
	printf("After deletion at between\n");
	head = deletatbetween(head,5);
	traverse(head);
	
}
