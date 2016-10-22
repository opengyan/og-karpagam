#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next,*random;
}
main()
{
int n,j,k,i ;
struct node *temp,*neww,*head=NULL ;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 temp=(struct node *)malloc(sizeof(struct node));
 temp->next=NULL;
 temp->random=NULL;
 scanf("%d",&temp->data);
 if(head==NULL)
 {
 neww=temp;
 head=temp;
 }
 else
 {
 neww->next=temp;
 neww=temp;
 }
}
neww=head;
for(i=0;i<n;i++)
{
printf("ENTER RANDOM NUMBER BETWEEN 1 T0 %d OR -1 FOR NULL",n);
scanf("%d",&k);
if(k>0)
{
j=1;
temp=head;
while(j<k)
{
temp=temp->next;
j++;
}
}
else
temp=NULL;
neww->random= temp;
neww=neww->next;
}
temp=head;
while(temp->next)
{
if(temp->random)
printf(" ( %d,%d ) -> ",temp->data,temp->random->data);
else
printf(" ( %d,0  ) -> ",temp->data,temp->random->data);
temp=temp->next;
}
printf(" ( %d,%d ) ",temp->data,temp->random->data);
}
