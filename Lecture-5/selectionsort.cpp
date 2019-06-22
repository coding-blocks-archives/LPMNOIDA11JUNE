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

    //Selection sort

    for(int i=0;i<n-1;i++)
    {
    	int min=i;
    	for(int j=i+1;j<n;j++)
    	{
    		if(a[min]>a[j])
    		{
    			min=j;
    		}
    	}

    	// int temp=a[i];
    	// a[i]=a[min];
    	// a[min]=temp;

       swap(a[i],a[min]);

    } 

    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
    cout<<endl;

	return 0;
}