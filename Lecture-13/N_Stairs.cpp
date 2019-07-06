// N_Stairs
#include <iostream>
using namespace std;

int N_Stairs(int n){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recursive case
	return N_Stairs(n-1)+N_Stairs(n-2)+N_Stairs(n-3);
}

int Stairs(int n,int k=3){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recursive case
	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += Stairs(n-i,k);
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<N_Stairs(n)<<endl;
	cout<<Stairs(n)<<endl;


	return 0;
}