#include<iostream>
using namespace std;


int main()
{
	int arr[][3]={{1,2,3},{4,5,6}};
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;


	char ch[][100]={{'A','B','C','\0'},{'D','E','F','\0'}};
	cout<<ch[0]<<endl;
	cout<<ch[1]<<endl;

	char ch1[][100]={"coding","blocks"};

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

    
    for(int cols=0;cols<c;cols++)
    {
    	for(int rows=0;rows<r;rows++)
    	{
    		cout<<a[rows][cols]<<" ";
    	}
    	cout<<endl;
    }

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