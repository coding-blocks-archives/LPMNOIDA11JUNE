#include<iostream>
using namespace std;

int sum(int *a,int n)
{
	//base case
	if(n==0)
	{
		return 0;
	}


	int ans=a[0]+sum(a+1,n-1);
	return ans;
}



int main()
{
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    cout<<sum(a,n)<<endl;
	return 0;

}	

