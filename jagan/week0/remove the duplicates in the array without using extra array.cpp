#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    for(vector<int>::iterator i=arr.begin();i!=arr.end();i++){
        for(vector<int>::iterator j=arr.begin();j!=arr.end();j++){
            if(i!=j && *i == *j) arr.erase(j--);
        }
    }
    for(vector<int>::iterator i=arr.begin();i!=arr.end();i++) cout<<*i<<" ";
    return 0;
}

