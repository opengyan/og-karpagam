#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int data;
	struct list *next;
}node;
node *insert(node *head,node *nn){
	node *sTemp=head,*cn=NULL;
	if(head==NULL){
		return nn;
	}
	while(sTemp!=NULL){
		if(sTemp->data>nn->data){
			if(cn==NULL){
				nn->next=head;
				head=nn;
			}
			else{
				nn->next=cn->next;
				cn->next=nn;
			}
			break;
		}
		cn=sTemp;
		sTemp=sTemp->next;
	}
	if(sTemp==NULL){
		cn->next=nn;
	}
	return head;
}
node *unionResult(node *set1,node *set2){
	node *result=NULL,*nn;
	while((set1!=NULL)&&(set2!=NULL)){
		nn=malloc(sizeof(node));
		nn->next=NULL;
		if(set1->data==set2->data){
			nn->data=set1->data;
			set1=set1->next;
			set2=set2->next;
		}
		else if(set1->data>set2->data){
			nn->data=set2->data;
			set2=set2->next;
		}
		else{
			nn->data=set1->data;
			set1=set1->next;
		}
		result=insert(result,nn);
	}
	if(set1==NULL)
	{
		result=insert(result,set2);
	}
	if(set2==NULL){
		result=insert(result,set1);
	}
	return result;
}
int main(){
	int n;
	node *nn,*set1=NULL,*set2=NULL;
	printf("ENTER NUMBER OF ELEMENTS IN SET 1: ");
	scanf("%i",&n);
	while(n--){
		nn=malloc(sizeof(node));
		scanf("%i",&nn->data);
		nn->next=NULL;
		set1=insert(set1,nn);		
	}
	printf("ENTER NUMBER OF ELEMENTS IN SET 2: ");
	scanf("%i",&n);
	while(n--){
		nn=malloc(sizeof(node));
		scanf("%i",&nn->data);
		nn->next=NULL;
		set2=insert(set2,nn);		
	}
	printf("RESULT SET IS :\n");
	node *result=unionResult(set1,set2);
	while(result!=NULL){
		printf("%i ",result->data);
		result=result->next;
	}
	return 0;
}
