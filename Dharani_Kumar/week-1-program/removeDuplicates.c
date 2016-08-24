#include <climits>
#include <iostream>

using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=INT_MAX;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=INT_MAX)
        {
            printf("%i ",a[i]);
        }
    }
    return 0;
}
