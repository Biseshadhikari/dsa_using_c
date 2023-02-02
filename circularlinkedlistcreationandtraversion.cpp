#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* addtoempty(int data){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next =temp;
	return temp;
}
struct node* addatbeg(struct node* tail){
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next = tail->next;
	ptr->data = 14;
	tail->next = ptr;
	return tail;
}
print(struct node* tail){
	struct node* ptr;
	ptr = tail->next;
	do{
		printf("The elements are %d \n",ptr->data);
		ptr= ptr->next;
	}while(ptr!=tail->next);
	
}
struct node* addatend(struct node* tail){
	struct node* ptr;
	ptr =(struct node*)malloc(sizeof(struct node));
	ptr->data = 17;
	
	ptr->next = tail->next;
	tail->next = ptr;
	tail= tail->next;
	return tail;
	

	
}
int main(){
	struct node * tail;
	tail = addtoempty(5);
//	printf("%d",tail->data);
//	tail = addatbeg(tail);
//	print(tail);
	
	tail = addatend(tail);
	print(tail);
	
	
	
	return 0;
	
}
