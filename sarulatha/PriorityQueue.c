#include<stdio.h>



struct node {

    int data;

    int priority;

    struct node *next;

}*head = NULL;



struct node *enqueue(struct node *front, int data, int priority) {

    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    struct node *temp,*temp1;

    newnode->data = data;

    newnode->priority = priority;

    newnode->next = NULL;

    if(front == NULL || front->priority > newnode->priority) {

        newnode->next = front;

        front = newnode;

    }

    else {

        temp = front;

        while(temp->next != NULL && (temp->priority <= newnode->priority)){

            temp1 = temp;

            temp = temp->next;

        }

        newnode->next = temp1->next;

        temp1->next = newnode;

        
        return front;

    }

}



struct node *dequeue(struct node *front) {

    struct node *temp;

    if(front == NULL)
 
        printf("Queue underflow\n");

    else {

        temp = front;

        front = front->next;

        free(temp);

    }

    return front;

}



void display(struct node *head) {

    struct node *temp = head;
 
    while(temp != NULL) {

        printf("%d %d\n", temp->data, temp->priority);

        temp = temp->next;

    }

}




int main() {

    int iNum, iLoop, iData, iPriority;

    scanf("%d",&iNum);

    for(iLopp = 0; iLoop < iNum; iLoop++) {

        scanf("%d %d",&iData, &iPriority);

        head = enqueue(head, iData, iPriority);

    }

    display(head);

    printf("\n\nDequeued\n");

    head = dequeue(head);

    head = dequeue(head);

    display(head);

    return 0;

}
