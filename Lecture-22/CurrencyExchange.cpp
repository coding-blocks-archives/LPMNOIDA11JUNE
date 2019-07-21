// CurrencyExchange
#include <iostream>
#include <climits>
using namespace std;

int topDown(int amount,int *coins,int n,int *dp){
	if(amount == 0){
		dp[amount] = 0;
		return 0;
	}
	if(dp[amount]!=-1){
		return dp[amount];
	}
	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int smallerAns = topDown(amount-coins[i],coins,n,dp);
			if(smallerAns!=INT_MAX){
				ans = min(smallerAns+1,ans);
			}
		}
	}
	dp[amount] = ans;
	return ans;
}

int BottomUP(int amount,int *coins,int n){
	int dp[10000] = {0};

	dp[0] = 0;

	for(int rupay = 1;rupay<=amount;rupay++){
		int ans = INT_MAX;
		for(int i=0;i<n;i++){
			if(rupay>=coins[i]){
				ans = min(dp[rupay-coins[i]],ans);
			}
		}
		dp[rupay] = ans + 1;
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];
}


int main(){
	int amount;
	cin>>amount;

	int dp[100000]={0};
	// int *dp = new int[n+1];
	for(int i=0;i<=10000;i++){
		dp[i] = -1;
	}

	int coins[]={1,2,5};
	int n=sizeof(coins)/sizeof(int);

	cout<<topDown(amount,coins,n,dp)<<endl;
	cout<<BottomUP(amount,coins,n)<<endl;



	return 0;
}