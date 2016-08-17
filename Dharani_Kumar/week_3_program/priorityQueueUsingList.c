#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int iData;
	int iPriority;
	struct list *next;
}node;
node *insert(node *,node *);
void printNode(node *);
int main(){
	node *sHead=NULL,*sTemp,*sCurNode,*sNewNode;
	int iNum,iTemp;
	scanf("%i",&iTemp);
	while(iTemp--){
		sNewNode=malloc(sizeof(node));
		printf("\nENTER QUEUE VALUE ");
		scanf("%i",&sNewNode->iData);
		printf("\nENTER QUEUE PRIORITY VALUE ");
		scanf("%i",&sNewNode->iPriority);
		sNewNode->next=NULL;
		sHead=insert(sHead,sNewNode);
	}
	printNode(sHead);
	return 0;
}
node *insert(node *head,node *nn){
	node *sTemp=head,*cn=NULL;
	if(head==NULL){
		return nn;
	}
	while(sTemp!=NULL){
		if(sTemp->iPriority>nn->iPriority){
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
void printNode(node *head){
	node *sTemp=head;
	printf("\nVALUES IN QUEUE:\n");
	while(sTemp!=NULL){
		printf("%i ",sTemp->iData);
		sTemp=sTemp->next;
	}
}
