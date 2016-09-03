#include<stdio.h>
#include<stdlib.h>
int count=0;
typedef struct  tree{
	int data;
	struct tree *left;
	struct tree *right;
}node;
node *create(){
		node *nn=malloc(sizeof(node));
		scanf("%i",&nn->data);
		nn->left=NULL;
		nn->right=NULL;
		return nn;
}
node *insert(node *head,node *nn){
	if(head==NULL){
		return nn;
	}
	if(head->data>nn->data){
		head->left=insert(head->left,nn);
	}
	else if(head->data<nn->data){
		head->right=insert(head->right,nn);
	}
	return head;
}
void findElem(node *head,int elemPos){
	if(head!=NULL){
		findElem(head->left,elemPos);
        count++;
		if(count==elemPos){
			printf("\n%i smallest in tree is %i\n",elemPos,head->data);
		}
		findElem(head->right,elemPos);
	}
}
int main(){
	int elemCount;
	node *head=NULL;
    printf("ENTER NUMBER OF ELEMENTS TO BE INSERT :");
	scanf("%i",&elemCount);
	while(elemCount--){
		node *nn=create();
		head=insert(head,nn);
	}
    printf("ENTER THE POSITION TO FIND :");
	scanf("%i",&elemCount);
	findElem(head,elemCount);
	return 0;
}
