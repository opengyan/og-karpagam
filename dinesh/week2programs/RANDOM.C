#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct node *address[100];//Storing adrresses of created nodes
struct node{
 int data;
 struct node * next;
 struct node *random;

}*head=NULL;
struct node * insert(int data){
 struct node *temp,* newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=data;
 newnode->next=NULL;
 newnode->random=NULL;
 if(head==NULL){
   head=newnode;
 }
 else{
  temp=head;
  while(temp->next!=NULL)//inserting newnode at the end of list
  temp=temp->next;
  temp->next=newnode;
 }
 return newnode;
}
void display(){
 struct node * temp=head;
 printf("Data\tAddress\n");
 while(temp){
  printf("%d->%d\t%d->%d\n",temp->data,temp->random->data,temp,temp->random);
  temp=temp->next;

 }
}
void createRandom(int size){
   //time_t t;
   //srand((unsigned)time(&t));
   struct node *temp=head;
   int pos;
   while(temp!=NULL){
    pos= rand()%size;
    while(address[pos]==NULL||address[pos]==temp){
       pos=rand()%size;
    }
    temp->random = address[pos];
    address[pos]=NULL;
    temp=temp->next;
   }

}
int main(){
 int n;
 int num ,i;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&num);
  address[i]=insert(num);
 }
 createRandom(n);
 display();
 getch();
 return 0;
}