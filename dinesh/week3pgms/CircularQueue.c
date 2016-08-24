#include <stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int front=-1, rear=-1 ;

void enqueue(){
	if((front==0 && rear==QUEUESIZE-1)||(front==rear+1)){
		printf("Queue is already full\n");
	}
	else{
		int data;
		printf("Enter value:");
		scanf("%d",&data);
		if(front==-1)
	    {
	        front=0;
	        rear=0;
	    }
	    else
	    {
	    	if(rear==QUEUESIZE-1)
	            rear=0;
	        else
	            rear=rear+1;
	    }
		queue[rear]=data;
	}
}

void dequeue(){
	if(front==-1)
		printf("Queue doesn't have any data to delete\n");
	else{
		queue[front]=0;
		if(front==rear)
	    {
	        front=-1;
	        rear=-1;
	    } 
	    else
	    { 
	        if(front==QUEUESIZE-1)
	        {
	            front=0;
	        } 
	        else 
	            front=front+1;
	    }
	}		
}

void displayQueue(){
		int i;
		printf("Queue : ");
		for(i=0;i<QUEUESIZE;i++)
			printf("%d,",queue[i]);	
		printf("\n");
}
int main(void) {
	int choice;
	while(1){
		printf("1.enqueue 2.dequeue 3.exit\nchoice : ");
		scanf("%d",&choice);
		if(choice==3)
			break;
		switch (choice){
			case 1: enqueue(); displayQueue(); break;
			case 2: dequeue(); displayQueue(); break;
		}
	}
	return 0;
}
