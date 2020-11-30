#include<stdio.h>
struct node{
	int data;
	struct node *next;
};

void main(){
struct node *head,*new_node, *temp;
head = NULL;
int choice=1;
int count=0;
do{
	new_node =(struct node *) malloc(sizeof(struct node));
	printf("Enter Data: \n");
	scanf("%d",&new_node->data);
	new_node->next = NULL;

	if(head=NULL){
		head=temp=new_node;
		printf("%d,%d",temp,head);
	}
	else{
		printf("%d,%d",temp,head);
		temp->next = new_node;
		temp=new_node;
	}
	printf("Wanna Continue (0,1) ?\n");
	scanf("%d",&choice);
}
while(choice);
temp=head;
printf("%d",temp);
while(temp!=NULL){
	printf("%d",count);
	count++;
	printf("%d ",temp->data);
	temp=temp->next;
	}
getchar();
}





