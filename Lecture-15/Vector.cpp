// Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	for(int i=1;i<=4;i++){
		v.push_back(i);
	}
 	v.push_back(5);
 	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"Size : "<<v.size()<<endl;
	cout<<"Capacity : "<<v.capacity()<<endl;
	
	return 0;
}