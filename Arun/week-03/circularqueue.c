#include<stdio.h>
#include<conio.h>
void insert();
void delete();
void display();
int max,circular_q[1000];
int front=-1,rear=-1;
int main()
{
int choice,flag=1;
printf("\n ENTER THE ARRAY SIZE");
scanf("%i",&max);
while(flag)
{
printf("\n1 - Enqueue\n2 - Dequeue\n3 - Display\n4 - Exit\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
default:
flag=0;
}
}
return 0;
}
void insert()
{
int addItem;
if((front==0 && rear==max-1)||(front==rear+1))
{
printf("\n Queue Overflow.\n\n");
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else
{
if(rear==max-1)
rear=0;
else
rear=rear+1;
}
scanf("%d",&addItem);
cirucular_q[rear]=addItem;
printf("Element inserted.");
}
void delete()
{
if(front==-1)
{
printf("\n Queue Underflow.\n\n");
return;
}
printf("\n Element deleted %d \n\n",cq[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
if(front==max-1)
{
front=0;
}
else
front=front+1;
}
}
void display()
{
int frontPos=front;
int rearPos= rear;
if(front==-1)
{
printf("\n Queue is empty.\n");
return;
}
printf("\n Queue elements is: \n");
if(frontPos<=rearPos)
{
while(frontPos<=rearPos)
{
printf("%d ",circular_q[frontPos]);
frontPos++;
}
}
else
{
while(frontPos<=max-1)
{
printf("%d ",circular_q[frontPos]);
frontPos++;
}
frontPos=0;
while(frontPos<=rearPos)
{
printf("%d ",circular_q[frontPos]);
frontPos++;
}
}
printf("\n");
