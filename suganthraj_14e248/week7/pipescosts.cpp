
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
               cin>>arr[i];
	
    int arr2[n+1];
   arr2[0] = 0;
   int i, j;
 
   for (i = 1; i<=n; i++)
   {
       int max = 0;
       for (j = 0; j < i; j++)
       {
       	if(max>arr[j] + arr2[i-j-1])    max;
       	else max=arr[j] + arr2[i-j-1];
	   }
        
       arr2[i] = max;
   }
    cout<<"max answer="<<arr2[n];
    
    return 0;
}
