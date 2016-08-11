#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
    char a[1000][1000];
    int count=0,sum=0,i=0;
    while(cin>>a[i++]){
        count+=1;
        sum+=strlen(a[i-1]);
    }
    sum/=count;
    if(sum>=8) cout<<"High\n";
    else if(sum<8&&sum>=4) cout<<"Medium\n";
        else cout<<"Low\n";
    return 0;
}

