// GridCost
#include <iostream>
using namespace std;
int MinCost(int i,int j,int cost[][4],int dp[10][10]){
	// Base case
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	if(i==0&&j==0){
		dp[i][j] = cost[i][j];
		return cost[i][j];
	}
	if(i==0 && j>0){
		dp[i][j]=cost[i][j] + MinCost(i,j-1,cost,dp);
		return dp[i][j];
	}
	else if(i>0 && j==0){
		dp[i][j]=cost[i][j] + MinCost(i-1,j,cost,dp);
		return dp[i][j];
	}
	else{
		dp[i][j] = min(MinCost(i-1,j,cost,dp),MinCost(i,j-1,cost,dp))+cost[i][j];
		return dp[i][j];
	}
}

int BottomUp(int k,int l,int cost[][4],int n){
	int dp[10][10]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0&&j==0){
				dp[i][j]=cost[i][j];
			}
			else if(i==0&&j>0){
				dp[i][j]=cost[i][j]+dp[i][j-1];
			}
			else if(i>0&&j==0){
				dp[i][j] = cost[i][j] + dp[i-1][j];
			}
			else{
				dp[i][j] = min(dp[i][j-1],dp[i-1][j])+cost[i][j];
			}
		}
	}
	return dp[k][l];
}


int main(){
	int cost[][4]={
		{1,1,1,8},
		{3,4,1,5},
		{8,2,1,1},
		{1,6,3,1}
	};
	int dp[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			dp[i][j] = -1;
		}
	}
	int i,j;
	cin>>i>>j;
	cout<<MinCost(i,j,cost,dp)<<endl;
	cout<<BottomUp(i,j,cost,4)<<endl;

	return 0;
}