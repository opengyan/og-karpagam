#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left,*right;
};
static int count=0;
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
void printnthsmallest(node * root,int n){
	
	if(root){
		printnthsmallest(root->left,n);		
		++count;
		if(count==n) {
		cout<<root->data;
		return ;
	}
		printnthsmallest(root->right,n);
		
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
	int num;
	cin>>num;
	if(n<num) cout<<"invalid input";
	else printnthsmallest(root,num);
	
}
