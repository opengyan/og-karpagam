/*PROBLEM  1:

Given a set of intervals, merge all the overlapping set of intervals.
For example, 
Input
[5,15], [23,35], [55,80], [30,50]
Output 
[5,15],[23,50],[55,80]
 
SOLUTION:*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
         cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
    
        if(a[i]<a[j]&&a[j]<b[i])
        {
             b[i]=b[j];
             a[j]=b[j]=0;
        }
           }
    
}
        for(int i=0;i<n;i++)
    {
        if(a[i]!=0&&b[i]!=0)
         cout<<a[i]<<" "<<b[i]<<"\n";
    }
    return 0;
}
