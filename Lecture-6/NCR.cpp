#include<iostream>
using namespace std;

// int factorial(int n)
// {
// 	int ans=1;
// 	for(int i=n;i>=1;i--)
// 	{
// 		ans*=i;
// 	}
// 	return ans;
// }

int factorial(int);

void NCR(int n,int r)
{
   int ans=factorial(n)/(factorial(n-r)*factorial(r));
   cout<<ans<<endl;
   return;
}

int factorial(int n)
{
	int ans=1;
	for(int i=n;i>=1;i--)
	{
		ans*=i;
	}
	return ans;
}


int main()
{
	int n,r;
	cin>>n>>r;
    NCR(n,r);
    return 0;
}










