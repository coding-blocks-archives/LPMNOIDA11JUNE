
#include<iostream>
using namespace std;


int main()
{
	int a[100][100];
	int r,c;
	cin>>r>>c;

	int val=1;

	for(int rows=0;rows<r;rows++)
	{
		for(int cols=0;cols<c;cols++)
		{
			a[rows][cols]=val;
			val++;
		}
	}

	for(int rows=0;rows<r;rows++)
	{
		for(int cols=0;cols<c;cols++)
		{
			cout<<a[rows][cols]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;


    for(int cols=0;cols<c;cols++)
    {
    	int sum=0;
    	for(int rows=0;rows<r;rows++)
    	{
    		sum+=a[rows][cols];
    	}
    	cout<<sum<<endl;
    }

    return 0;
}
