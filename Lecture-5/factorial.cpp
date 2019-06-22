#include<iostream>
using namespace std;

int fact(int n)
{
	int ans=1;
	for(int i=n;i>=1;i--)
	{
		ans=ans*i;
	}

	return ans;
}

void NCR(int n,int r)
{
	int ans=fact(n)/(fact(n-r)*fact(r));
	cout<<ans<<endl;
	return;
}


int main()
{
    int n,r;
    cin>>n>>r; 
    NCR(n,r);
	return 0;
}







