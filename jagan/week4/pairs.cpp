#include<iostream>
using namespace std;
struct node{
	int data;
	int height;
	struct node * left,*right;
};

int height(struct node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
struct node* newNode(int data)
{
    struct node* temp = new node;
    temp->data   = data;
    temp->left   = NULL;
    temp->right  = NULL;
    temp->height = 1;  
    return(temp);
}

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;

    return x;
}
struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;
    y->left = x;
    x->right = T2;
 
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
 

    return y;
}

int getBalance(struct node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
 
struct node* insert(struct node* node, int data)
{
    if (node == NULL)
        return(newNode(data));
 
    if (data < node->data)
        node->left  = insert(node->left, data);
    else
        node->right = insert(node->right, data);
        
    node->height = max(height(node->left), height(node->right)) + 1;
    int balance = getBalance(node);
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);
    if (balance < -1 && data > node->right->data)
        return leftRotate(node);
    if (balance > 1 && data > node->left->data)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

node * findPair(struct node * root,int data){
	if(root){
		if(root->data==data) return root;
		else if(root->data > data) return findPair(root->left,data);
		else if(root->data < data) return findPair(root->right,data);
	}
	return NULL;
}

void pairs(node * ROOT,node * root,int n){
	
	if(root){
		node * temp=findPair(ROOT,n-(root->data));
		pairs(ROOT,root->left,n);
				if( temp&& temp!=root){
			cout<<root->data<<" "<<n-(root->data)<<endl;
			}
		pairs(ROOT,root->right,n);
	}
}

int main()
{
	struct node * root=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		root=insert(root,num);
	}
	cin>>n;
	pairs(root,root,n);
	
}
