#include<iostream>

int main(int argc, char const *argv[])
{
	int n;
	std::cin>>n;
	int i, iArray[n];
	int max = 0, count = 0, startIndex = 0, endIndex = 0;
	for(i = 0; i < n; i++) {
	    std::cin>>iArray[i];
		if(iArray[i] > 0) 
			count++;
		else {
			count = 0;
		}
		if(count > max) {
		    max = count;
			endIndex = i;
			startIndex = endIndex - (count - 1);
		}
	}
	for(i = startIndex; i <= endIndex; i++) 
		std::cout<<iArray[i]<<"  ";
	return 0;
}