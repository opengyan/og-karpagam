#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int,int > > arr;
    for(int i=0;i<n;i++){
        int num1,num2;
        cin>>num1>>num2;
        arr.push_back(make_pair(num1,num2));
    }
    sort(arr.begin(),arr.end());
    for(vector<pair<int,int > >::iterator j=arr.begin()+1;j!=arr.end();j++){
    if((j-1)->second >= j->first) {
        
        if((j-1)->second <= j->second ) (j-1)->second=j->second;       
        arr.erase(j);
        j--;
    }
    }
     for(vector<pair<int,int > >::iterator j=arr.begin();j!=arr.end();j++){
         cout<<j->first<<" "<<j->second<<endl;
     }
    return 0;
}

