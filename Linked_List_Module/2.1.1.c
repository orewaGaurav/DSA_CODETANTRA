#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
}*head = NULL;

//function to insert node
void insert(int value){
	struct node *ptr,*tmp;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next=NULL;
	ptr->data = value;
	if(head ==NULL)
		head = ptr;
	else{
		tmp =head;
		while(tmp->next!=NULL){
			tmp =tmp->next;
		}
		tmp->next = ptr;
	}
}

//function to delete the node by value
void delete(int value){
	if(head == NULL){
		return;
	}
	if(head->next==NULL){//first node delete
		struct node *tmp;
		tmp = head;
		head = tmp->next;
		free(tmp);
		return;
	}
	struct node *tmp;
	tmp=head;
	while(tmp->next!=NULL && tmp->next->data!=value){
		tmp=tmp->next;
	}
	if(tmp->next==NULL){
		return;
	}
	struct node *del;
	del = tmp->next;
	tmp->next=tmp->next->next;
	free(del);
}


//function to traverse the node
void traverse(){
	struct node *tmp;
	tmp=head;
	while(tmp != NULL){
		printf("%d ",tmp->data);
		tmp =tmp->next;
	}
	printf("\n");
}


int main (){
	int n,task,value;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		scanf("%d %d",&task,&value);
		if(task ==1)
		insert(value);
		else if(task==2)
		delete(value);
	}
	traverse();
	return 0;
}