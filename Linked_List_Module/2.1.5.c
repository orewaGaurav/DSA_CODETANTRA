#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;
void insert(int value){
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data = value;
	ptr->next =head;
	head=ptr;
}
void display(){
	struct node *tmp;
	tmp = head;
	while(tmp != NULL){
		printf("%d ",tmp->data);
		tmp=tmp->next;
	}
	printf("\n");
}
int main (){
	int n,value;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		scanf("%d",&value);
		insert(value);
	}
	display();
}