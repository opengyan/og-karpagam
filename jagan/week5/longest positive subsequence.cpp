#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> array(n);
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int resultstart=-1,resultend=-1,start=-1,end=-1,flag=0,count=0,maxcount=0;
	for(int i=0;i<n;i++){
		if(array[i]>0){
		if(!flag){
			flag=1;
			start=i;
			end=i;
			count=1;
		}
		else if(flag){
			end++;
			count++;
		}
			
		}
		else{
		if(count>maxcount){
			maxcount=count;
			count=0;
			flag=0;
			resultstart=start;
			resultend=end;
		}	
		
		}
	}
	if(count>maxcount){
			maxcount=count;
			count=0;
			flag=0;
			resultstart=start;
			resultend=end;
		}	
	if(resultstart>=0) for(int i=resultstart;i<=resultend;i++) cout<<array[i]<<" ";
	else cout<<"No Such Sequence Found";
return 0;	
}
