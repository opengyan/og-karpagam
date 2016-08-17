#include<stdio.h>
#define size 8
int queue[size],front=-1,rear=-1;
int isFull() {
	if(front>rear&&front==rear+1)
		return 1;
	if(rear==size-1&&front==0)
		return 1;
	return 0;		
}
int isEmpty() {
	if(front==rear&&front==-1)
		return 1;
	else
	    return 0;	
}
void enqueue(int data) {
	if(isFull())
	 printf("Queue Full\n");
	 else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=data;
	}
	else if(rear==size-1)
	{
		rear++;
		rear%=size;
	queue[rear]=data;
	}
	else
	{	rear++;
	queue[rear]=data;
		}
}
void dequeue() {
	if(isEmpty())
		printf("Queue Empty\n");
	else if(front==rear&&front!=-1)
	{
		front=-1;rear=-1;
	}
	else if(front==size-1)
	{
		front++;
		front%=size;
	}
	else
		front++;
}
void display() {
	int i;
	if(isEmpty())
		printf("Queue is Empty\n");
	else if(front>rear)
	{
		for(i=front;i<size;i++)
	 printf("%d ",queue[i]);
		for(i=0;i<=rear;i++)
		 printf("%d ",queue[i]);
	 } 
	 else 
	 {
	 	for(i=front;i<=rear;i++)
	 	 printf("%d ",queue[i]);
	 }
	printf("\n");
}
int main() {
	int choice,element,key=1;
	while(key) {
		printf("Enter the option:\n[1]-Enqueue\n[2]-Dequeue\n[3]-isFull\n[4]-isEmpty\n[5]-Display\n[6]-Exit\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:scanf("%d",&element);
				   enqueue(element);
				   break;
			case 2:dequeue();
				   break;
			case 3:printf("isFull - ");
					if(isFull())
					    printf("Yes\n");
					else
						printf("No\n");	 
				   break; 
			case 4:printf("isEmpty - ");
					if(isEmpty())
					    printf("Yes\n");
					else
						printf("No\n");	 
				   break; 
			case 5:display();
				   break;
			case 6:key=0; 
		}
		display();
	}
	return 0;		
}
