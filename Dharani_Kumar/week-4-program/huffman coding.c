/*
./a.out 
she sells sea shells on the sea shore
e 0
s 10
h 11
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=0;
char code[50];
typedef struct nodes{
	int frequency;
	char data;
	char code[50];
	struct nodes *left;
	struct nodes *right;
	struct nodes *next;
}node;
node *head=NULL,*tree=NULL;
node *createNode(int frequency,char data){
	node *temp=malloc(sizeof(node));
	temp->frequency=frequency;
	temp->data=data;
	temp->next=NULL;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insertList(node *head,node *nn){
	node *sTemp=head,*cn=NULL;
	if(head==NULL){
		return nn;
	}
	while(sTemp!=NULL){
		if(sTemp->frequency>=nn->frequency){
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
void printNode(node *temp,char val,int top){
	if(temp!=NULL){
		code[top]=val;
		printNode(temp->left,'0',top+1);
		if(temp->data!='#'){
			strncpy(temp->code,code,top+1);
			printf("%c %s\n",temp->data,temp->code);
		}
		code[top]=val;
		printNode(temp->right,'1',top+1);
	}
}
node *insertTree(node *tree,node *left,node *right){
	node *temp=createNode(left->frequency+right->frequency,'#');
	temp->left=left;
	temp->right=right;
	head=insertList(head,temp);
	return head;
}
int main(){
	int listSize,frequencyHash[26]={0},iTemp;
	node *temp;
	char word[50];
	scanf("%s",word);
	for(iTemp=0;iTemp<strlen(word);iTemp++){
		frequencyHash[word[iTemp]-97]++;
	}
	for(iTemp=0;iTemp<26;iTemp++){
		if(frequencyHash[iTemp]){
			node *temp=createNode(frequencyHash[iTemp],iTemp+97);
			head=insertList(head,temp);
		}
	}
	while(head->next!=NULL){
		node *left=head;
		head=head->next;
		node *right=head;
		head=head->next;
		head=insertTree(tree,left,right);
	}
	printNode(head,'0',-1);
	return 0;
}
