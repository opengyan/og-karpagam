#include<stdio.h>
#include<stdlib.h>
typedef struct merge{
	int data;
	struct merge *next;
}node;
int main(){
	node *head=NULL,*head1=NULL,*temp,*temp1,*cn=NULL,*nn;
	int n,flag=1;
	scanf("%i",&n);//no of element in first list
	while(n--){
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
	scanf("%i",&n);// no of left in second list
	while(n--){
		nn=malloc(sizeof(node));
		scanf("%i",&nn->data);
		nn->next=NULL;
		if(head1==NULL){
			head1=nn;
			cn=nn;
		}
		else{
			cn->next=nn;
			cn=nn;
		}
	}
	temp=head;
	scanf("%i",&n);// position to link the list
	while(n--){
		temp=temp->next;
	}
	cn->next=temp;
	temp=head;
	temp1=head1;
	while((temp!=NULL)&&flag){
		temp1=head1;
		while(temp1!=NULL){
			if(temp==temp1){//llinked position
				flag=0;
				break;
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}
	printf("%i",temp1->data);// data at linked position
	return 0;
}
