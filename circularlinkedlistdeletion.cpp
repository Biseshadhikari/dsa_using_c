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
struct node* deleteatbeg(struct node* tail){
	struct node* ptr;
	ptr = tail->next;
	if (tail ==NULL){
		printf("the list is empty");
	}
	else if(ptr->next == tail){
		tail = NULL;
		free(ptr);
	}
	else{
	
	tail->next = ptr->next;
	free(ptr);
	
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
struct node* deleteatend(struct node* tail){
	struct node*ptr,*ptr1;
	ptr = tail;
	ptr1 =  tail->next;
	if (tail == NULL){
		printf("The list is empty");
		
	}
	else if(ptr->next == tail){
		tail = NULL;
		free(ptr);
		
	}
	else{
		while(ptr1->next!=tail->next){
			ptr1= ptr1->next;
			ptr= ptr->next;
		}
		ptr->next = tail->next;
		tail = ptr;
		free(ptr1);
		
	}
	return tail;
}
int main(){
	struct node* tail;
	tail = createcll();
	printf("Before the deletion of end node\n");
	traverse(tail);
	
//	printf("After the deletion of first node\n");
//	tail = deleteatbeg(tail);
//	traverse(tail);
	
	printf("After the deletion of end node");
	tail = deleteatend(tail);
	traverse(tail);
}
