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

	//wave print

	for(int cols=0;cols<c;cols++)
	{
		if(cols%2==0)
		{
			for(int rows=0;rows<r;rows++)
			{
				cout<<a[rows][cols]<<" ";
			}
		}
		else
		{
			for(int rows=r-1;rows>=0;rows--)
			{
				cout<<a[rows][cols]<<" ";
			}
		}
	}

	cout<<endl;

	return 0;

}	