#include<iostream>
#include<map>
using namespace std;
struct job{
	string name;
	int deadline;
	int profit;
};
void findProfit(struct job *obj[],int n){
	map<int,pair<int,string> > hashmap;
	hashmap.clear();
	int sum=0;
	for(int i=0;i<n;i++){
		if(  hashmap[obj[i]->deadline].first < obj[i]->profit){
			hashmap[obj[i]->deadline]=make_pair(obj[i]->profit,obj[i]->name);
		}
	}
	cout<<"Day\tProfit\tJob\n";
	for(map<int,pair<int,string> >::iterator i=hashmap.begin();i!=hashmap.end();i++){
	 cout<<i->first<<"\t"<<i->second.first<<"\t"<<i->second.second<<endl;
	 sum+=i->second.first;
}
cout<<"Maximum profit gained="<<sum;
}                                       
int main()
{

	
		int n;
		cin>>n;
		struct job *obj[n];
		for(int i=0;i<n;i++){
			obj[i]=new job;
			cin>>obj[i]->name;
			cin>>obj[i]->deadline;
			cin>>obj[i]->profit;
		}
		findProfit(obj,n);
		
}
