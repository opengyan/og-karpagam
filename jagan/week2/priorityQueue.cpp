#include<iostream>
#include<bits/stdc++.h>
#define MAX 3
using namespace std;
int size;
struct node{
	int data;
	int priority;
	struct node * next;
};
struct node * enQueue(struct node * Queue,int data,int priority){
	if(size==MAX){
		cout<<"cannot insert element queue size exceeded\n";
		return Queue;
	}
	struct node * temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	p=Queue;
	temp->data=data;
	temp->priority=priority;
	size++;
	if(p==NULL){
		temp->next=Queue;
		Queue=temp;
	}else{
	while(p->next && p->next->priority<temp->priority) p=p->next;
	temp->next=p->next;
	p->next=temp;
}
return Queue;	
}
struct node * deQueue(struct node * Queue){
	if(Queue==NULL){
		cout<<"cannot delete element!! Queue is empty\n";
	}
	else{
	struct  node * temp;
	temp=Queue;
	Queue=Queue->next;
	free(temp);	
	}	
	return Queue;
}
void print(struct node * Queue){
	if(!Queue) cout<<"Queue is empty";
	while(Queue){
		cout<<Queue->data<<"\t"<<Queue->priority<<"\t";
		Queue=Queue->next;
	}
	cout<<endl;
}
int main(){
	size=0;
	struct node * front=NULL;
	front=deQueue(front);
	print(front);
	front=enQueue(front,1,1);
	print(front);
	front=enQueue(front,3,5);
	print(front);
	front=enQueue(front,5,3);
	print(front);
	front=enQueue(front,1,1);
	print(front);
	front=deQueue(front);
	print(front);
	front=deQueue(front);
	print(front);
	front=deQueue(front);
	print(front);
	front=deQueue(front);

}
