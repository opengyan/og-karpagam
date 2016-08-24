#include <cstring>
#include <iostream>
using namespace std;
int main(){
    std::string a;
    int i=3,count=0,size=0,j;
    while(i--){
        std::getline (std::cin,a);
        int length=a.size();
        for(j=0;j<length;j++)
        {
            if(a[j]==' ')
                count++;
            else
                size++;
        }
        count++;
    }
    int val=size/count;
    if(val<4)
        cout<<"low";
    else if(val<8)
        cout<<"medium";
    else
        cout<<"high";
   return 0;
}
