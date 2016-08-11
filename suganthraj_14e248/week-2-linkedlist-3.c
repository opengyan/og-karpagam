#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head=NULL,*head1=NULL,*temp,*temp1,*cn=NULL,*nn;
	int n,f=1;
	scanf("%d",&n);//to read the maximum element
	while(n--){
		nn=malloc(sizeof(struct node));
		scanf("%d",&nn->data);
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
	scanf("%d",&n);
	while(n--){
		nn=malloc(sizeof(struct node));
		scanf("%d",&nn->data);
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
	scanf("%d",&n);
	while(n--){
		temp=temp->next;
	}
	cn->next=temp;
	temp=head;
	temp1=head1;
	while((temp!=NULL)&&f){
		temp1=head1;
		while(temp1!=NULL){
			if(temp==temp1){
				f=0;
				break;
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}
	printf("%d",temp1->data);
	return 0;
}
