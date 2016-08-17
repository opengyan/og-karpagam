#include<iostream>
#include<stdlib.h>

int max_size=8,queue[1000],front=-1,rear=-1;
using namespace std;


void enqueue()
{
    int element;
    if((front==0 && rear==max_size-1)||(front==rear+1))
    {
    	cout<<"queue overflow"<<endl;
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
    	if(rear==max_size-1)
            rear=0;
        else
            rear=rear+1;
    }
    cout<<"enter value to be inserted"<<endl;
    cin>>element;
    queue[rear]=element;
    cout<<"element enqueued"<<endl;
}
void dequeue()
{
    if(front==-1)
    {
    	cout<<"empty queue"<<endl;
        return;
    }
    cout<<"enqueued element is--"<<queue[front]<<endl;
    if(front==rear)
    {
        front=-1;
        rear=-1;
    } 
    else
    { 
        if(front==max_size-1)
        {
            front=0;
        } 
        else 
            front=front+1;
    }
}
void display()
{
    int f=front;
    int r= rear;
    if(front==-1)
    {
        cout<<"empty queue"<<endl;
        return;
    }
    cout<<"elements are"<<endl;
    if(f<=r)
    {
        while(f<=r)
        {
        cout<<queue[f++];
         
        }
    }
    else
    {
        while(f<=max_size-1)
        {
           cout<<queue[f++]; 
        }
        f=0;
        while(f<=r)
        {
            cout<<queue[f++];
        }
    }
   cout<<endl; 
}
int main()
{
	
	


    int choice;
    while(1)
    {
        cout<<"1)Enqueue 2)Dequeue  3) Display 4)Exit--------->";
      cin>>choice;
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
                case 4:  exit(1);
        }
    }
return 0;
}
