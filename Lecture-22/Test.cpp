#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	// int dp[100000];
	int *dp = new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}


	return 0;
}