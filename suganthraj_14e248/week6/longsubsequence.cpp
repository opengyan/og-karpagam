#include<iostream>
using namespace std;
int main()
{
	int n,count=0,max=0,lastindex,firstindex=0,i;
	cin>>n;
	int arr[n];
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for( i=0;i<n;i++)
	{
	  if(arr[i]>0)
	  {
	  	
	  	if(count==n)
	  	{
	  		firstindex=0;
	  		lastindex=n-1;
	  		max=n;
	  		break;
		  }
	  	count++;
	  }
	  else{
	  	if(count>=max){
		  max=count;
		  firstindex=i-count;
		  lastindex=i-1;
		  count=0;
		  }
	  	
	  	
	  }
}
if(count>=max){
		  max=count;
		  firstindex=i-count;
		  lastindex=i-1;
		  
		  }
cout<<firstindex<<"\n"<<lastindex<<"\n"<<max<<"\n";
	for( i=firstindex;i<=lastindex;i++)
	     cout<<arr[i]<<" ";
	   return 0;
}
