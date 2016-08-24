/*
Given an array and an integer k, find the maximum for each and every contiguous subarray of size k.
A[]= {1,2,3,3,4,5,2,1,6}
k = 3
{3,3,4,5,5,5,6}*/

#include<stdio.h>
int queue[100];
int front = -1, rear = -1;
void insert (int size, int value) {
 	int item;
	if(rear == size-1)
		printf("Queue overflow");
	else {
		if(front == -1)
			front = 0;
		rear = rear + 1;
		queue[rear] = value;
	}
}
void display(int value) {
	int index, jindex, count = 0,max = -1000;
	if(front == -1) 
		printf("Queue empty");
	else {
		for(index = front; index <= rear- value + 1; index ++) {
			count = 0;
			max = -1000;
			for(jindex = index; count < value; jindex ++) {
				if(queue[jindex] > max) 
					max = queue[jindex];
				count ++;
			}
			printf("%d ",max);
		}
		printf("\n");
	}
}
int main() {
	int size,index,k,element;
	scanf("%d",&size);
	for(index = 0; index < size; index ++) {
		scanf("%d",&element);
		insert(size,element);
	}
	scanf("%d",&k);
	display(k);
}
