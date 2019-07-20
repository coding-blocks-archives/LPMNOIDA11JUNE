// TopKNUmber
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
		return a>b;
	}
};

void Print(priority_queue<int,vector<int>,MeraComparator> h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
}

int main(){

	// priority_queue<int> h; // Max-Heap

	// Min heap using STL
	priority_queue<int,vector<int>,MeraComparator> h;
	// MeraComparator - name of a class


	int k = 3;
	int count = 0;
	while(1){
		int no;
		cin>>no;
		if(no==-1){
			Print(h);
		}
		else{
			if(count == k){
				if(no>h.top()){
					h.pop();
					h.push(no);
				}
			}
			else{
				h.push(no);
				count++;
			}
		}
	}
	return 0;
}
