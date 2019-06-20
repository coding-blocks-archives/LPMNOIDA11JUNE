// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[100]={1,2,3,4,5,6}; // Initialization of array
	int b[]={1,2,3,4,5,6}; // Initialization of array
	cout<<sizeof(b)/sizeof(int)<<endl;
	cout<<sizeof(a)/sizeof(int)<<endl;
	// a[0]=1;
	// a[1]=2;
	// a[2]=3;
	// a[3]=4;
	// a[4]=5;
	// a[5]=6;
	int n ;
	cout<<"Enter n :(max 100)";
	cin>>n;
	int number =1;
	for(int i=0;i<n;i++){
		// cin>>a[i];
		a[i] = number;
		number ++;
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0; 
}