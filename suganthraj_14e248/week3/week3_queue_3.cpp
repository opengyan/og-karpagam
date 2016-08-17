#include<iostream>
using namespace std;
int main(){
	int arr_size,sub_arr_size,iloop,rear,front;
	cout<<"enter array size-->";
	cin>>arr_size;
	int array[arr_size];
	cout<<"enter array elements"<<endl;
	cin>>array[0];
	int max_size=array[0];
	for(iloop=1;iloop<arr_size;iloop++){
	cin>>array[iloop];
	}
		cout<<"enter sub array size-->";
	cin>>sub_arr_size;	
	for(iloop=1;iloop<sub_arr_size;iloop++){
		max_size=max_size<array[iloop]?array[iloop]:max_size;
	}
	cout<<max_size<<" ";
	front=0;
	rear=sub_arr_size-1;
	while(front<(arr_size-sub_arr_size)){
		rear++;
		if(max_size<array[rear]){
			max_size=array[rear];
				cout<<max_size<<" ";
			front++;
		}
		else {
			front++;			
				max_size=array[front];
				for(iloop=front+1;iloop<=rear;iloop++){
					max_size=max_size<array[iloop]?array[iloop]:max_size;
				}				
				cout<<max_size<<" ";
		}
	
	}
}
