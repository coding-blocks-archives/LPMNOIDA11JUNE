// CircularQueue
#include <iostream>
using namespace std;

class Queue{
	int* a;
	int cs;
	int n;
	int f;
	int r;
public:
	Queue(int s=5){
		a = new int[s];
		cs = 0;
		n = s;
		f = 0;
		r = n-1;
	}

	void push(int data){
		if(cs==n){
			cout<<"Queue Overflow"<<endl;
		}
		else{
			r = (r+1)%n;
			a[r] = data;
			cs++;
		}
	}

	void pop(){
		if(cs==0){
			cout<<"Queue Underflow"<<endl;
		}
		else{
			f=(f+1)%n;
			cs--;
		}
	}

	bool empty(){
		return cs==0;
	}

	int front(){
		return a[f];
	}

};

int main(){

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	q.pop();xn








	return 0;
}