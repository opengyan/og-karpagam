#include <stdio.h>


int queue[8], front, rear;



int isFull() {

    if((front == 0 && rear == 7) || (front == (rear + 1)))

        return 1;

    return 0;

}



int isEmpty() {

    if((front == rear) && front == -1)

        return 1;

    return 0;

}



void enqueue(int data) {

    if(isFull())

        printf("Queue is full\n");

    else {

        if(front == -1 && rear == -1)

            front = rear = 0;

        else if(rear == 7 && front > 0)

            rear = 0;

        else
 
            rear++;

        queue[rear] = data;

        printf("Enqueued %d\n", queue[rear]);

    }

}



int dequeue() {

    int data;

    if(isEmpty()) {
 
        printf("Queue is empty\n");

        return;

    }

    else {

        data = queue[front];

        if(front == rear)
 
            front = rear = -1;

        else if(front == 7)

            front = 0;

        else

            front++;

    }

    return data;

}



void display() {

    int i;

    if(front <= rear) {

        for(i = front; i <= rear; i++)

            printf("%d ", queue[i]);

    }

    if(front > rear){

        for(i = front; i <= 7; i++)

            printf("%d ", queue[i]);

        for(i = 0; i <= rear; i++)

            printf("%d ", queue[i]);

    }

    printf("\n");

}



int main()
{

    int n, val;

    front= -1;rear = -1;

    enqueue(7);

    enqueue(9);

    printf("Dequeued %d\n", dequeue());

    enqueue(1);

    enqueue(9);

    enqueue(10);

    enqueue(12);

    display();

    enqueue(21);

    enqueue(15);

    enqueue(34);

    enqueue(100);

    enqueue(99);

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    enqueue(5);

    display();

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    printf("Dequeued %d\n", dequeue());

    enqueue(100);

    display();

    return 0;
 
}
 