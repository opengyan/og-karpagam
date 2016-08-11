#include<stdio.h>
struct node {
	int data;
	struct node * next;
	struct node * random;
};
struct node * insert(struct node * head,int data){
	struct node * temp1=(struct node *)malloc(sizeof(struct node)),*temp2=head;
	temp1->data=data;
	temp1->next=NULL;
	temp1->random=NULL;
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
void print(struct node * head){
	while(head){
		printf("%d\t\t",head->data);
		if(head->random) printf("%d\n",head->random->data);
		else printf("NULL\n");
		head=head->next;
	}
}
void RandomClone(struct node * head,struct node * rand,int num){
	int i;
	
	for( i=1;i<num;i++)
{
	if(!head) break;
	head=head->next;
}
rand->random=head;
}
int main(){
	int n,i;
printf("Enter the Number of Nodes:");
scanf("%d",&n);
struct node *head=NULL; 
for(i=0;i<n;i++){
	printf("Enter the value to be stored in Node %d:\t",i+1);
	int num;
	scanf("%d",&num);
	head=insert(head,num);
}
struct node * temp=head;
for(i=0;i<n;i++){
	printf("Enter the Random Node to be Cloned with Node %d:\t",i+1);
	int num;
	scanf("%d",&num);
	RandomClone(head,temp,num);
	temp=temp->next;
}
printf("Node data\tCloned node's data\n");
print(head);
return 0;
}
