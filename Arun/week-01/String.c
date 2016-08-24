#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
      
 char ac[1001][1001];
    int count=0,sum=0,i=0,val=0;
    while(cin>>ac[i++]){
       // cout<<i;
        count++;
        sum+=strlen(ac[i-1]);
    }
    //cout<<count;
   val=sum/count;
    if(val<4)
        cout<<"low";
    if(val>=8)
        cout<<"high";
    if(val>4&&val<8)
        cout<<"medium";
    return 0;
}