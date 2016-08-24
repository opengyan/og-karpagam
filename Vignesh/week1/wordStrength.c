#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t,i=0,c=1,j=0;
    float avg;
    cin>>t;
    while(t--)
        {
        char a;
        while(c<3){
            scanf("%c",&a);
            if(a==' ')
                j++;
           else if(a=='\n')
                c++;
            else
            i++;
        }
        avg=i/j;
        if(avg>=8)
            cout<<"High\n";
        else if(avg>=4&&avg<8)
            cout<<"Medium\n";
            else 
            cout<<"Low\n";
           
    }
    return 0;
}
