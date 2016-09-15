/*
enter first set size
5
1
1
2
2
3
enter second set size
5
1
2
3
4
5
resultant set is
 1 1 2 2 3 4 5
*/
#include <iostream>     
#include <algorithm>   
#include <vector>       
int main () {
	int n,q;
	std::cout<<"enter first set size\n";
		std::cin>>n;
	 int first[n];
	 for(int i=0;i<n;i++){
	 		std::cin>>first[i];
	 }
		std::cout<<"enter second set size\n";
	std::cin>>q;
  int second[q]; 
  for(int i=0;i<q;i++){
	 		std::cin>>second[i];
	 }
  std::vector<int> v(n+q);                      
  std::vector<int>::iterator it;

  std::sort (first,first+n);     
  std::sort (second,second+q);   

  it=std::set_union (first, first+n, second, second+q, v.begin());
                                               
  v.resize(it-v.begin());                     

 	std::cout<<"resultant set is\n";
  for (it=v.begin(); it!=v.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
