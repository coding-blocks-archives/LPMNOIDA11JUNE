// Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<char> v;
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}