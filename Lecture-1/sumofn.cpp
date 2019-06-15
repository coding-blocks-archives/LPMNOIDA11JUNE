#include <iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1;
	int a;
	int sum=0;
	int p=INT_MIN;
	while(i<=n)
	{
       cin>>a;
       sum=sum+a;
       if(p<a)
       {
       	 p=a;
       }
       i++;
	}
	cout<<sum<<endl;
	cout<<p<<endl;
	


	return 0;
}