#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i=0,val,f=0,j=0,k=0;
    cin >> n;
  int arr[n];
    for(k = 0;k < n;k++){
       cin >> val;
        f=0;
        
        for(i=0;i<j ;i++){
            if(arr[i]==val)
                f=1;}
        
        
        if(f==0){
            arr[j]=val;j++;}
        f=0;
        
    }
      for(k = 0;k < j;k++){
            cout<<arr[k]<<" ";}
    
    return 0;
}
