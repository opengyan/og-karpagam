#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node *next;
	struct node *random;
}*head=NULL, *clone = NULL;

struct node* create(struct node *head, int data) {
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	struct node *temp;
	newnode->data = data;
	newnode->next = NULL;
	newnode->random = NULL;
	if(head == NULL)
		head = newnode;
	else {
		temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return head;
}

void display(struct node *head) {
	struct node *temp = head;
	while(temp != NULL) {
		printf("%d -> %d\n|\n", temp->data, temp->random->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

struct node* link(struct node *head, int n)  {
	struct node *temp = head;
	int count = 1;
	while(count < n && temp!=NULL){
		count++;
		temp = temp->next;
	}
	return temp;
}

struct node* random(struct node *head) {
	struct node *temp = head;
	int n;
	while(temp != NULL) {
	     printf("Random node for %d : ",temp->data);
	     scanf("%d",&n);
	     temp->random = link(head, n);
	     temp = temp->next;
	}
	return head;
}

struct node* fn_clone(struct node *clone, struct node *head) {
	struct node *temp1 = clone, *temp2 = head;
	while(temp2 != NULL) {
		temp1->random = temp2->random;
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	return clone;
}

void main() {
	int n, i, val;
	struct node *temp;
	clrscr();
	scanf("%d",&n);
	for(i = 0; i < n; i++) {
		scanf("%d",&val);
		head = create(head, val);
	}
	head = random(head);
	display(head);
	temp = head;
	for(i = 0; i < n; i++) {
		clone = create(clone, temp->data);
		temp = temp->next;
	}
	clone = fn_clone(clone, head);
	printf("Clone : \n");
	display(clone);
	getch();
}