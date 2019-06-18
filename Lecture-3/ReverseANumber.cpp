#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum = 0;
	for( ; n!=0 ; n = n/10){
		sum = sum*10 + n%10;
	}
	cout<<sum<<endl;


	// int sum = 0;
	// // n=1234;
	// while(n!=0){
	// 	// cout<<n%10;
	// 	sum = sum*10 + n%10;

	// 	n=n/10;
	// }



	// cout<<sum<<endl;
	// cout<<sum+100<<endl;
	// cout<<n%10<<endl; // 4
	// n = n/10; // 123
	// cout<<n<<endl; // 123
	// cout<<n%10<<endl; // 3
	

	return 0; 
}