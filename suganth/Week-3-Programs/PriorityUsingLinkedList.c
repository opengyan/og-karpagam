#include<stdio.h>
struct node {
	int data;
	int priority;
	struct node *next;
};
struct node * insert(struct node *head,int data,int priority) {
	struct node *temp1,*temp2;
	temp1=(struct node *)malloc(sizeof(struct node));
	temp1->data=data;
	temp1->priority=priority;
	temp1->next=NULL;
	if(head==NULL)
		return temp1;
	temp2=head;
	if(temp2->priority>temp1->priority){
	temp1->next=temp2;
	return temp1;
	}
	while(temp2->next!=NULL&&temp2->next->priority<=temp1->priority)
	temp2=temp2->next;
	temp1->next=temp2->next;
	temp2->next=temp1;
	return head;
}
void display(struct node *head) {
	struct node *temp=head;
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main() {
	int n,i,element,priority;
	struct node *head=NULL;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the element and priority:");
	for(i=0;i<n;i++) {
		printf("%d->",i+1);
		scanf("%d %d",&element,&priority);
		head=insert(head,element,priority);	
	}
	display(head);
	return 0;
}
