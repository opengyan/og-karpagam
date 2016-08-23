#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n],b[n];
    for(int i=0;i<n;i++)
        {
       cin>>a[i]>>b[i];
            }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(a[i]<a[j]&&a[j]<b[i]){
            b[i]=b[j];
           a[j]=b[j]=0;
            
        }
        }
    }
   
     for(int i=0;i<n;i++)
        {
        if(a[i]!=0)
       cout<<a[i]<<" "<<b[i]<<endl;
    
        }
    
    
    return 0;
}
