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


	//spiral print 

	int sr=0,er=r-1,sc=0,ec=c-1;

	while(sr<=er && sc<=ec)
	{
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;

		for(int i=sr;i<=er;i++)
		{
			cout<<a[i][ec]<<" ";
		}

		ec--;

		if(sr<=er)
		{
			for(int i=ec;i>=sc;i--)
			{
				cout<<a[er][i]<<" ";
			}

			er--;
		}

		if(sc<=ec)
		{
			for(int i=er;i>=sr;i--)
			{
				cout<<a[i][sc]<<" ";
			}

			sc++;
		}	
	}

	return 0;
}