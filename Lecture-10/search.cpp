#include<iostream>
using namespace std;

bool search(int *a,int n,int data,int i)
{

	if(i==n)
	{
		return false;
	}

	if(a[i]==data)
	{
		return true;
	}

	return search(a,n,data,i+1);
}



int main()
{
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    
    int data;
    cin>>data;

    if(search(a,n,data,0))
    {
    	cout<<"found"<<endl;
    }
    else
    {
    	cout<<"not found"<<endl;
    }

	return 0;

}	








