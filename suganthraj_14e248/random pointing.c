#include<stdio.h>
#include<stdlib.h>
typedef struct merge{
	int data;
	struct merge *next;
	struct merge *random;
}node;
int main(){
	node *head=NULL,*head1=NULL,*temp,*temp1,*cn=NULL,*nn;
	int n,flag=1;
	scanf("%i",&n);//no of element in first list
	int i=n;
	while(i--){
		nn=malloc(sizeof(node));
		scanf("%i",&nn->data);
		nn->next=NULL;
		if(head==NULL){
			head=nn;
			cn=nn;
		}
		else{
			cn->next=nn;
			cn=nn;
		}
	}
	temp=head;
	while(temp!=NULL){
		temp1=head;
		i=rand()%n;//generating randomized position for node
		while(i--){
			temp1=temp1->next;
		}
		temp->random=temp1;// pointing random position
		temp=temp->next;
	}
	printf("\nordered\t    randomed");
	temp=head;
	while(temp->next!=NULL){
		printf("\n  %i--------------->%i\n  |\n  V\n",temp->data,temp->random->data);//printing ordered and random position
		temp=temp->next;
	}
	printf("\n  %i--------------->%i\n",temp->data,temp->random->data);
}
