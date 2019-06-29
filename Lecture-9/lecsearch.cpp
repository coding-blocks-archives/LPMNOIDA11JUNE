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

	int data;
	cin>>data;
    int flag=0;
    for(int rows=0;rows<r;rows++)
    {
    	for(int cols=0;cols<c;cols++)
    	{
    		if(a[rows][cols]==data)
    		{
    			flag=1;
    			cout<<"element found"<<endl;
    			break;
    		}
    	}

    	if(flag)
    	{
    		break;
    	}
    }

    if(!flag)
    {
    	cout<<"element not found"<<endl;
    }

	return 0;

}	


