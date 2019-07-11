// Vectors
#include <iostream>
using namespace std;

template<typename T>
class Vector{
	T *arr;
	int cs;
	int ms;
public:

	Vector(int s=4){
		arr = new T[s];
		cs =0;
		ms =s;
	}

	void push(T d){
		if(cs==ms){
			T *oldarr =arr;
			int oldsize =ms;

			arr = new T[2*ms];
			ms = 2*ms;
			for(int i=0;i<oldsize;i++){
				arr[i] = oldarr[i];
			}
			delete[] oldarr;

		}
		arr[cs] = d;
		cs++;
	}

	void pop(){
		if(cs>0){
			cs--;
		}
	}

	// return_type operator[](){}
	T operator[](int i){
		return arr[i];
	}

	bool empty(){
		return cs ==0; // 5==5 6==5
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}
};


int main(){
	Vector<char> v;

	v.push('A');
	v.push('B');
	v.push('C');
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;








	return 0;
}