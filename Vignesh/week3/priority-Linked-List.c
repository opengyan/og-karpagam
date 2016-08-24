#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    short data;
    struct node *next;
    short priority;
} *head=NULL;
struct node* createList(struct node *temp,int value){
    struct node *mem=malloc(sizeof(struct node));
    mem->data=value;
    mem->next=NULL;
    if(temp==NULL){
        head=mem;
        temp=head;
    }
    else{
        temp->next=mem;
        temp=mem;
    }
    return temp;
}
int main() {
    struct node *temp=head,*tp=head;
    int number,count=0,value=0,link,ipriority,flag=0;
    scanf("%d ",&number);
    while(number--){
        scanf("%d %d",&value,&ipriority);
           temp=head;
           struct node *mem=malloc(sizeof(struct node)),*prev=NULL;
    mem->data=value;
    mem->next=NULL;
    mem->priority=ipriority;
    flag=0;
           while(temp!=NULL){
           	if(temp->priority<ipriority){
           		
			   }
			   else
			   {
			   	flag=1;
			   	break;
			   }
			   prev=temp;
			   temp=temp->next;
		   }
     
          if(prev==NULL){
        head=mem;
        prev=head;
        prev->next=temp;
          prev=head;
    }
    else{
       prev->next=mem;
        mem->next=temp;
    }
    }
   
    temp=head;
     while(temp!=NULL){ 
        printf("%d %d\n",temp->data,temp->priority);
        temp=temp->next;
     }
    return 0;
}
