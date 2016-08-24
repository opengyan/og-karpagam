#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    short data;
    struct node *next;
    struct node *random;
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
    int number,count=0,c=0,link;
    scanf("%d ",&number);
    while(number--){
        scanf("%d ",&c);
        temp = createList(temp,c);
       
    }
  c=0;
    temp=head;
    while(temp!=NULL){ 
        printf("%d ",temp->data);
        temp=temp->next;
        tp=head;
            
    scanf("%d ",&link);
        c=1;
            while(tp->next!=NULL&&c<link){
                tp=tp->next;
                c++;
            }
        temp->random=tp;
    }
    temp=head;
     while(temp!=NULL){ 
        printf("%d %d\n",temp->data,temp->random->data);
        temp=temp->next;
     }
    return 0;
}
