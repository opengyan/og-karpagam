#include<stdio.h>
struct node {
	char data;
	struct node * next;
};
struct node * insert(struct node * head,char data){
	struct node * temp1=(struct node *)malloc(sizeof(struct node)),*temp2=head;
	temp1->data=data;
	temp1->next=NULL;
	if(!head){
		head=temp1;
	}
	else {
		while(temp2->next){
			temp2=temp2->next;
		}
			temp2->next=temp1;
		}
	return head;
}
int length(struct node * head){
	int count=0;
	while(head){
		head=head->next;
		count++;
	}
	return count;
}
void intersection(struct node * temp1,struct node * temp2){
	while(temp1&&temp2){
		if(temp1==temp2) {
			printf("%c",temp1->data);
			return ;
		}
		temp1=temp1->next;
		temp2=temp2->next;
	}
	printf("NULL/ No intersection point found");
	return ;
}
int main(){
	int i;
	struct node * head1=NULL,*head2=NULL,*result=NULL;
	head1=insert(head1,'1');
	insert(head1,'2');
	insert(head1,'3');
	insert(head1,'4');
	insert(head1,'5');
	head2=insert(head2,'a');
	insert(head2,'b');
	head2->next->next=head1->next->next;
	struct node * temp1=head1,*temp2=head2;
	int length1=length(head1);
	int length2=length(head2);
	if(length1>length2){
	for( i=0;i<length1-length2;i++){
		temp1=temp1->next;
	}
	}
	else{
	for(i=0;i<length2-length1;i++){
		temp2=temp2->next;
	}
	}
	intersection(temp1,temp2);	
}
