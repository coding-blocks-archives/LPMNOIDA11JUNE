#include <iostream>
#include <climits>
using namespace std;

int topDown(int n,int k,int *dp){
	if(n==0){
		dp[n] = 1;
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += topDown(n-i,k,dp);
	}
	dp[n] = ans;
	return dp[n];
}

int BottomUp(int n,int k){
	int dp[100000]={0};
	dp[0]=1;
	for(int i=1;i<=n;i++){
		int ans = 0;
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				ans+=dp[i-j];
			}
		}
		dp[i] = ans;
	}
	return dp[n];
}

int FastStairs(int n,int k){
	int dp[10000]={0};
	dp[0]=dp[1] =1;

	for(int i=2;i<=n;i++){
		if(i-k-1>=0){
			dp[i] = 2*dp[i-1]-dp[i-k-1];
		}
		else{
			dp[i] = 2*dp[i-1];
		}
	}

	// for(int i=0;i<=n;i++){
	// 	cout<<dp[i]<<" ";
	// }
	cout<<endl;
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
	cout<<topDown(n,3,dp)<<endl;
	cout<<BottomUp(n,3)<<endl;
	cout<<FastStairs(n,3)<<endl;

	return 0;
}