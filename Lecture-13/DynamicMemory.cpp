#include <iostream>
using namespace std;
int* CreateArr(int n){
	int *arr = new int[n]; // run time memory allocation

	for(int i=0;i<n;i++){
		arr[i] = i;
	}	
	return arr;
}

int main(){
	int *a = new int;
	*a = 10;

	cout<<*a<<endl;
	delete a;
	a= NULL;
	int n;
	cin>>n;

	// int *arr = new int[n]; // run time memory allocation

	// for(int i=0;i<n;i++){
	// 	arr[i] = i;
	// }
	int *arr = CreateArr(n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete []arr;
	arr =NULL;
	cout<<endl;


	return 0;
}