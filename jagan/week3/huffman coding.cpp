#include<iostream>
#include<queue>
#include<map>
using namespace std;
typedef struct node{
	int frequency;
	char data;
	struct node * left;
	struct node * right;
}*no;
	struct comp {
    bool operator() (no arg1, no arg2) {
        return arg1->frequency > arg2->frequency ; 
    }
};
	//priority_queue< no, vector<no>, greater<no> > queue1,queue2;
	priority_queue< no, vector<no>, comp > queue1,queue2;
struct node * maketree(int fre,char a){
		no mi=new node;
		mi->data=a;
		mi->frequency=fre;
		mi->left=NULL;
		mi->right=NULL;
		return mi;
	}
	struct node * LastTwoElement(){
		no mi=new node;
		mi->data='$';
		no t=queue1.top();
		int freq=t->frequency;
		mi->left=t;
		queue1.pop();
		t=queue1.top();
		mi->frequency=freq+t->frequency;
		mi->right=t;
		queue1.pop();
		return mi;
	}
struct node * createMinHeapTree(struct node * root){
	while(queue1.size()!=1){
		queue1.push(LastTwoElement());
	}
	return queue1.top();
}	
void print(struct node *root,string str){
	
		//cout<<root->data<<" "<<root->frequency<<"  "<<str<<endl;
		if(root->left) print(root->left,str+'0');
		if(root->right) print(root->right,str+'1');
		if(!(root->left) && !(root->right))	cout<<root->data<<" "<<str<<endl;
	
}
int main()
{
	struct node * root=NULL;
	string inputString;
	getline(cin,inputString);
	map<char ,int> frequency;
	frequency.clear();
	for(int i=0;i<inputString.length();i++){
		frequency[inputString[i]]++;
	}
	for(map<char ,int>::iterator i=frequency.begin();i!=frequency.end();i++){
	//cout<<i->second<<" "<<i->first<<endl;
		queue1.push(maketree(i->second,i->first));
	}
	/*queue1.push(maketree(5,'a'));
	queue1.push(maketree(9,'b'));
	queue1.push(maketree(12,'c'));
	queue1.push(maketree(13,'d'));
	queue1.push(maketree(16,'e'));
	queue1.push(maketree(45,'f'));*/
	root=createMinHeapTree(root);
	print(root,"");
}
