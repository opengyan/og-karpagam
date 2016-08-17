#include<stdio.h>
#define size 100
int queue[size],front=-1,rear=-1;
void enqueue(int data) {
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else if(rear==size-1)
	{
		rear++;
		rear%=size;
	}
	else
		rear++;
	queue[rear]=data;
}
void dequeue() {
	if(front==rear)
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
int maximum() {
	int i,max;
	max=queue[front];
	for(i=front+1;i<=rear;i++)
		if(max<queue[i])
			max=queue[i];
	return max;		
}
int main() {
	int n;
	scanf("%d",&n);
	int max,k,arr[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&k);
	for(i=0;i<k;i++)
		enqueue(arr[i]);
	max=maximum();
	printf("%d ",max);
	for(i=k;i<n;i++)
	{
		dequeue();
		enqueue(arr[i]);
		if(arr[i]>max)
			max=arr[i];
		else
			max=maximum();
		printf("%d ",max);	
			}
	return 0;		
}
