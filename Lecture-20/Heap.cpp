// Heap
#include <iostream>
#include <vector>
using namespace std;

class Minheap{
	vector<int> v;

	void heapify(int i){
		int left = 2*i;
		int right = left+1;
		int min_index = i;
		if(left<v.size() && v[left]<v[min_index]){
			min_index = left;
		}
		if(right<v.size() && v[right]<v[min_index]){
			min_index = right;
		}

		if(i!=min_index){
			swap(v[i],v[min_index]);
			heapify(min_index);
		}
	}

public:
	Minheap(){
		v.push_back(-1);
	}

	void push(int data){
		v.push_back(data);
		int child = v.size()-1;
		int parent=child/2;

		while(child>1 && v[child]<v[parent]){
			swap(v[child],v[parent]);
			child = parent;
			parent = parent/2;
		}
	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}

	int top(){
		return v[1];
	}

	bool empty(){
		return v.size() == 1;
	}

};


int main(){

	Minheap h;

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