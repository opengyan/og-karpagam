#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left,*right;
};
struct node * insert(node * root,int data){
	node * temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if(!root){
		root=temp;
	}else{
		if(data<=root->data){
			root->left=insert(root->left,data);
		}if(data>root->data){
			root->right=insert(root->right,data);
		}
	}
	return root;
}
int height(struct node * root){
	if(!root) return 0;
	if(root){
		return max(height(root->left)+1,height(root->right)+1);
	}
}
void BFS(node * root,int n){
	
	if(root){
		BFS(root->left,n-1);		
		if(n==0) {
		cout<<root->data;
		return ;
	}
		BFS(root->right,n-1);
		
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
	n=height(root);
	cout<<n;
	 for(int i=0;i<n;i++)
	 BFS(root,i);
	
}
