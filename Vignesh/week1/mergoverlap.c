1.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
int n;
cin>>n;
int a[n],b[n],i,j,c,val1,val2,k;
for(i=0;i<n;i++)
    cin>>a[i]>>b[i];
for(i=0;i<n;i++){
    val1=a[i];
    val2=b[i];
    
     if(val1!=-1&&val2!=-1)
    for(j=i+1;j<n;j++)
        {
        if(val2>=a[j]&&i!=j&&a[j]!=-1&&b[j]!=-1)
            {
            
            if(a[i]>a[j]){a[i]=-1;
            val1=a[j];a[j]=-1;
                         }
            if(val2<=b[j]&&i!=j&&a[j]!=-1)
                {b[i]=-1;val2=b[j];b[j]=-1;}
                         }
    }
    for(k=0;k<n;k++)
        {
        if(a[k]>=val1&&a[k]<val2)
            a[k]=-1;
    }
    if(val1!=-1&&val2!=-1)
    cout<<val1<<" "<<val2<<endl;
}
  return 0;
}
