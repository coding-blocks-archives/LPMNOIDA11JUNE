#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"non-prime"<<endl;
			return 0;
		}
		i++;
	}

    cout<<"number is prime"<<endl;

    return 0;

}