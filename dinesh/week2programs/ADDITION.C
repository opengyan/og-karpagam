#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long long int num2,carry=0;


struct node{
	 int data;
	 struct node * next;
}*head=NULL;


void * insert(int data){
	 struct node *temp,* newnode=(struct node *)malloc(sizeof(struct node));
	 newnode->data=data;   //inserting node at the begining of the list
	 newnode->next=head;
	 head = newnode;
}

void reverseAddition(struct node *temp){
	 int tt;
	 if(temp!=NULL){
	 reverseAddition(temp->next);	//traversing upto end of linked list
	 tt=carry;
	  carry = ((temp->data+(num2%10)+carry)/10);	//performing addition
	 temp->data = (temp->data+(num2%10)+tt)%10;
	 num2/=10;
	 }
}


void display(){
	 struct node * temp=head;
	 while(temp){
	  printf("%d ",temp->data);
	  temp=temp->next;
	 }
}


int main(){
	 long long int n;
	 long long int num,i;
	 clrscr();
	 printf("Enter number1: ");
	 scanf("%lld",&num);
	 while(num){
		  insert(num%10);	//inserting single digit into linked list
		  num/=10;
	 }
	 printf("Created Linked List:");
	 display();
	 printf("\n");
	 printf("Enter number2: ");
	 scanf("%lld",&num2);
	 reverseAddition(head);
	 num2+=carry;
	 while(num2){
		  insert(num2%10);
		  num2/=10;
	 }
	 printf("Sum: ");
	 display();
	 getch();
	 return 0;
}