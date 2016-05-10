#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::endl;

int	main(){
	int n = 0, sum = 0;
	int x =1;
	vector<int> ivec;
	while(cin>>n){
		ivec.push_back(n);
	}
	if(ivec.size()%2==0){
		for(vector<int>::size_type ix=0;ix!=ivec.size();ix+=2){
			sum = ivec[ix]+ivec[ix+1];
			cout<<"the sum is:"<<sum<<endl;
		}
	}else{
		cout<<"the last num is not sum: "<<ivec[ivec.size()-1]<<endl;
	}
	return 0;
}