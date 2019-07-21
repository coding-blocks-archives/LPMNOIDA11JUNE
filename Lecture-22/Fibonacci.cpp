#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0||n==1){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

int fibo1(int n,int *dp){
	if(n==0||n==1){
		dp[n] = n;
		return n;
	}
	// Check before calculating an answer
	if(dp[n]!=-1){
		return dp[n];
	}
	// Calculating nth fibonacci number
	int ans = fibo1(n-1,dp)+fibo1(n-2,dp);
	dp[n] = ans; // Notedown the answer before returning it
	return dp[n];
}

int BottomUp(int n){
	int dp[100000]={0};

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	} 
	return dp[n];
}

int main(){
	int n;
	cin>>n;

	// int dp[100000];
	int *dp = new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}
	cout<<fibo1(n,dp)<<endl;
	cout<<BottomUp(n)<<endl;
	cout<<fibo(n)<<endl;


	return 0;
}