#include<stdio.h>
int circularqueue[100],front=-1,rear=-1;
void isfull(int n)
{
if((front== rear+1)||(front==0 &&rear==n-1))
printf("QUEUE FULL\n");
else
printf("QUEUE NOT FULL\n");
}
void isempty(int n)
{
if(front==rear && rear==-1)
{
printf("QUEUE EMPTY\n");
}
else
printf("QUEUE NOT EMPTY\n");
}
main()
{
int n,value,choice;
printf("ENTER QUEUE SIZE\n");
scanf("%d",&n);
while(1)
{
printf("Press 1.To enqueue  2.To dequeue  3.Isfull  4.Isempty  5.exit\n");
scanf("%d",&choice);
if(choice==1)
{

	if(rear==front-1 || front==0 && rear==n-1)
       {  printf("QUEUE FULL\n");  continue; }
	else if(front>0 && rear==n-1)
	rear=0;
	else if(front==rear&& rear==-1)
	rear=front=0;
	else if(rear<n)
	rear++;
		scanf("%d",&value);
	circularqueue[rear]=value;
}
else if(choice==2)
{
if(front == n && rear>=0)
front=0;
if(front==rear && rear==-1)
{
printf("QUEUUE EMPTY\n");
}
else if(front==rear)
{
printf("DEQUEUED VALUE = %d\n",circularqueue[front]);
front=rear=-1;
}
else
{
printf("DEQUEUED VALUE = %d\n",circularqueue[front]);
front++;
}
}
else if(choice==3)
isfull(n);
else if(choice==4)
isempty(n);
else if(choice==5)
break;
}
}
