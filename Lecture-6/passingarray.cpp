#include<iostream>
using namespace std;

void printarray(int a[ ],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return;
}

int sum(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}

int main()
{
	// int arr[]={1,2,3,4,5,6};
	int arr[100];
	int n;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}




    cout<<"output"<<endl;

	// int n=sizeof(arr)/sizeof(int);
    // printarray(arr,n);
    cout<<sum(arr,n)<<endl;








    
    return 0;
}