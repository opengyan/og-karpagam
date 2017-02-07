#include<iostream>
#include<map>
using namespace std;
main()
{
int size1,size2,number;
map<int , int> a;
cout<<"size of first set\n";
cin>>size1;
cout<<"elements for  first set\n";
while(size1--)
{
cin>>number;
a[number]++;
}
cout<<"size of second set\n";
cin>>size2;
cout<<"elements for  second set\n";
while(size2--)
{
cin>>number;
a[number]++;
}
cout<<"UNION IS \n";
for(map<int,int>::iterator i=a.begin();i!=a.end();i++)
{
	   if(i->second>1)
	   cout<<"-> "<<i->first<<endl;
}
}
