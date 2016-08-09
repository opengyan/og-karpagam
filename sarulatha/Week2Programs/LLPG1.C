#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node *next;
}*head=NULL;

struct node* create(struct node *head, int data) {
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	struct node *temp;
	newnode->data = data;
	newnode->next = NULL;
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
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct node *add(struct node *head, int val) {
	struct node *temp = head;
	int carry = 0, num;
	while(temp->next != NULL && val != 0) {
		num = (temp->data + ((val % 10) + carry)) % 10;
		carry = (temp->data + ((val % 10) + carry)) / 10;
		temp->data = num;
		temp = temp->next;
		val /= 10;
	}
	if(temp->next == NULL) {
		num = (temp->data + ((val % 10) + carry)) % 10;
		carry = (temp->data + ((val % 10) + carry)) / 10;
		temp->data = num;
	}
	if(carry != 0) {
		struct node *newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = carry;
		newnode->next = NULL;
		temp->next =newnode;
	}
	return head;
}

struct node* reverse(struct node *head) {
	struct node *temp, *prev, *next;
	temp = head;
	prev = NULL;
	while(temp != NULL) {
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	head = prev;
	return head;
}

void main() {
	int n1, n2, dup;
	clrscr();
	scanf("%d",&n1);
	dup = n1;
	while(dup != 0) {
		head = create(head, (dup % 10));
		dup /= 10;
	}
	scanf("%d",&n2);
	head = add(head, n2);
	head = reverse(head);
	display(head);
	getch();
}