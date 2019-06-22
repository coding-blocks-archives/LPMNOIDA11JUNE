#include<iostream>
using namespace std;

int main()
{
	int a[10000];
	int n;
	cin>>n;
	cout<<"enter elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

    for(int i=0;i<n-1;i++)
    {
    	int flag=0;
    	for(int j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			flag=1;
    			swap(a[j],a[j+1]);
    		}
    	}

    	if(flag==0)
    	{
    		break;
    	}
    }

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}