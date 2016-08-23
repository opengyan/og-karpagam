#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	char a[1000][1000];
	int length=0,word=0,i=0;
	while(cin>>a[i++]){
		word++;
		length+=strlen(a[i-1]);
	}
	int h=length/word;
  
   if(h<4) cout<<"low"<<endl;
    else if(h<8&&h>=4)  cout<<"medium"<<endl;
        else if(h>8) cout<<"high"<<endl;
	return 0;
}
