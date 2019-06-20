// Scope
#include <iostream>
using namespace std;
float pi = 3.14;

int main(){

	pi = pi + 1;
	cout<<pi<<endl;
	float pi = 100.11;
	
	cout<<(::pi)<<endl; // Scope resolution operator
	::pi = ::pi + 10;
	cout<<(::pi)<<endl; // Scope resolution operator



	// int i = 10;

	// int x = 1000;

	// for(i=0;i<=5;i++){
	// 	cout<<i<<" ";
	// 	int x = 50;
	// }
	// cout<<endl;
	// cout<<x<<endl; 
	// cout<<i<<endl;

	return 0; 
}