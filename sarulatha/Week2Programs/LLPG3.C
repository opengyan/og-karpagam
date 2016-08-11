#include<stdio.h>
#include<conio.h>

struct node {
	char data;
	struct node *next;
}*head1=NULL, *head2=NULL;

struct node* create(struct node *head, char data) {
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
		printf("%c ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct node *createIntersection(struct node *head1, struct node *head2, int n) {
	struct node *temp = head2, *temp2 = head1;
	int count = 1;
	while(temp->next != NULL)
		temp = temp->next;
	while(count < n) {
		count++;
		temp2 = temp2->next;
	}
	temp->next = temp2;
	return head2;
}

struct node *traverse(struct node *head, int d) {
	struct node *temp = head;
	int count = 1;
	while(count < d-1) {
		count++;
		temp = temp->next;
	}
	return temp;
}

void intersection(struct node *head1, int n, struct node *head2, int m)  {
	struct node *temp1 = head1, *temp2 = head2;
	if(n > m)
		temp1 = traverse(head1, n-m);
	else if(m > n)
		temp2 = traverse(head2, m-n);
	//printf("%d %d\n", temp1->data, temp2->data);
	while(temp1 != NULL && temp2 != NULL && temp1 != temp2){
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	if(temp1 == temp2)
		printf("%c\n", temp1->data);
	else
		printf("NO INTERSECTION\n");
}



void main() {
	int n, i, val, m;
	char c;
	clrscr();
	scanf("%d",&n);
	scanf("%c",&c);
	for(i = 0; i < n; i++) {
		scanf("%c",&c);
		head1 = create(head1, c);
		scanf("%c",&c);
	}
	display(head1);
	scanf("%d",&m);
	scanf("%c",&c);
	for(i = 0; i < m; i++) {
		scanf("%c",&c);
		head2 = create(head2, c);
		scanf("%c",&c);
	}
	scanf("%d",&val);
	head2 = createIntersection(head1, head2, val);
	display(head2);
	m = m + (n - val) +1;
	//printf("%d %d\n", n, m);
	intersection(head1, n, head2, m+(n-val));
	getch();
}