#include <iostream>
using namespace std;

int main(){
	int *a = new int;
	*a = 10;

	cout<<*a<<endl;
	int n;
	cin>>n;
	int *arr = new int[n]; // run time memory allocation

	for(int i=0;i<n;i++){
		arr[i] = i;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}