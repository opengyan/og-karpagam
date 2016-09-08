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
int find_height(node *temp) { 
	int height=0; 
	if (temp !=NULL) 
	{ 
		int left_height= find_height(temp ->left); 
		int right_height= find_height(temp -> right); 
		int max=(left_height > right_height) ? left_height : right_height; 
		height = 1+ max; 
	} 
	return height; 
} 
int get_diff(node *temp) 
{ 
	int left_height=find_height(temp -> left); 
	int right_height=find_height(temp -> right); 
	int b_factor= left_height -right_height; 
	return b_factor; 
} 
node * right_right_rotation(node *parent) { 
	node *temp1; 
	temp1=parent ->right; 
	parent->right = temp1 -> left; 
	temp1 -> left= parent; 
	return temp1; 
} 
node * left_left_rotation(node *parent) { 
	node *node1; 
	node1 = parent -> left; 
	parent -> left = node1 -> right; 
	node1 -> right = parent; 
	return node1; 
}
node * right_left_rotation(node *parent) { 
	node *node1; 
	node1=parent -> right; 
	parent->right = left_left_rotation(node1); 
	return right_right_rotation(parent); 
}  
node * left_right_rotation(node *parent) { 
	node *node1; 
	node1= parent -> left; 
	parent-> left = right_right_rotation(node1); 
	return left_left_rotation(parent); 
} 
node * balancing(node *temp) { 
	int b_f= get_diff(temp); 
	if (b_f >1) { 
		if (get_diff(temp->left) >0) 
			temp=left_left_rotation(temp); 
		else 
			temp=left_right_rotation(temp); 
	} 
	else if(b_f < -1) { 
		if(get_diff(temp->right) >0) 
			temp=right_left_rotation(temp); 
		else 
			temp=right_right_rotation(temp); 
	} 
	return temp; 
}
node *insert(node *head,node *nn){
	if(head==NULL){
		return nn;
	}
	if(head->data>nn->data){
		head->left=insert(head->left,nn);
		head=balancing(head);
	}
	else if(head->data<nn->data){
		head->right=insert(head->right,nn);
		head=balancing(head);
	}
	return head;
}
void breadthFirst(node *root){
	int front=-1,rear=0; 
	node **lvl;
	front++;
	lvl=malloc(sizeof(node));
	lvl[front]=root;
	while(front<=rear){
		if(lvl[front]->left!=NULL){
			rear++;
			lvl=realloc(lvl,(rear+1)*sizeof(node));
			lvl[rear]=lvl[front]->left;
		}
		if(lvl[front]->right!=NULL){
			rear++;
			lvl=realloc(lvl,(rear+1)*sizeof(node));
			lvl[rear]=lvl[front]->right;
		}
	front++;
	}
	for(front=0;front<=rear;front++){
		printf("%i\n",lvl[front]->data);
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
	breadthFirst(head);
	return 0;
}
