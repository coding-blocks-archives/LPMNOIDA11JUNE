// MinStepsToOne
#include <iostream>
#include <climits>
using namespace std;

int topDown(int n,int *dp){
	if(n==1){
		dp[n] = 0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	
	op1 = 1+topDown(n-1,dp);
	if(n%3==0){
		op2 = 1+topDown(n/3,dp);
	}
	if(n%2==0){
		op3 = 1+topDown(n/2,dp);
	}

	dp[n] = min(op1,min(op2,op3));
	return dp[n];
}


int BottomUp(int n){
	int dp[100000]={0};
	dp[1] = 0;
	int op1,op2,op3;
	for(int i=2;i<=n;i++){
		op1=op2=op3 = INT_MAX;
		if(i%3==0){
			op1 = dp[i/3];
		}
		if(i%2==0){
			op2 = dp[i/2];
		}
		op3 = dp[i-1];
		dp[i] = min(op1,min(op2,op3))+1;
	}

	// for(int i=1;i<=n;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	return dp[n];
}

int main(){
	int n;
	cin>>n;

	int dp[100000];
	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}
	cout<<topDown(n,dp)<<endl;
	cout<<BottomUp(n)<<endl;


	return 0;
}