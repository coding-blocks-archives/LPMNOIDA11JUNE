// Heap_STL
// Heap
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class MeraComparator{
public:
	// Functor
	bool operator()(int a,int b){
		return a<b;
	}
};

int main(){

	// priority_queue<int> h; // Max-Heap

	// Min heap using STL
	priority_queue<int,vector<int>,MeraComparator> h;
	// MeraComparator - name of a class

	h.push(10);
	h.push(15);
	h.push(0);
	h.push(6);
	h.push(16);
	h.push(60);
	h.push(4);
	h.push(2);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}



	return 0;
}