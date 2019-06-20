// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[100];

	int n ;
	// cout<<"Enter n :(max 100)";
	// cin>>n;
	n=10;
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
	
	int key;
	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Element Found at index : "<<i<<endl;
			break;
		}
	}	
	if(i==n){
		cout<<"Key Not Found"<<endl;
	}
	cout<<endl;

	return 0; 
}