// ReadNumberAndPrint
// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[100];

	int n ;
	cout<<"Enter n :(max 100)";
	cin>>n;
	int number =1;
	for(int i=0;i<n;i++){
		// cin>>a[i];
		a[i] = number;
		number ++;
	}
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}	
	cout<<endl;

	return 0; 
}