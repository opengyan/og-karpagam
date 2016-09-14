#include<iostream>
#include<map>
using namespace std;
map<int,int> set;
int main()
{
	 int n1,n2,val;
	 cin>>n1>>n2;
	 for(int i=0;i<n1;i++)
	 {
	 	cin>>val;
	 	set[val]+=1;
	 }
	 for(int i=0;i<n2;i++)
	 {
	 	cin>>val;
	 	set[val]+=1;
	 }
	 for(map<int,int>::iterator i=set.begin();i!=set.end();i++)
	 {
	 	cout<<i->first<<" ";
	 }
return 0;

}
