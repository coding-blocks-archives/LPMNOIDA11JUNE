#include<iostream>
using namespace std;

bool issorted(int *a,int n)
{
	//base case
	if(n==0 || n==1)
	{
		return true;
	}
    
    bool kyaAageSortedMila=issorted(a+1,n-1);
    if(a[0]<=a[1] && kyaAageSortedMila)
    {
    	return true;
    }

    return false;

}

bool issorted1(int *a,int n,int i)
{

	//base case
	if(i==n-1)
	{
		return true;
	}


	//recursive case
	bool  kyaAageSortedMila=issorted1(a,n,i+1);
	if(a[i]<=a[i+1] && kyaAageSortedMila)
	{
		return true;
	}

	return false;
}


bool issorted2(int *a,int n)
{
	//base case
	if(n==0 || n==1)
	{
		return true;
	}

	bool kyaPeecheSeSortedMila=issorted2(a,n-1);
	if(a[n-2]<=a[n-1] && kyaPeecheSeSortedMila)
	{
		return true;
	}

	return false;
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

	if(issorted(a,n))
	{
		cout<<"sorted"<<endl;
	}
	else
	{
		cout<<"unsorted"<<endl;
	}

	if(issorted1(a,n,0))
	{
		cout<<"sorted"<<endl;
	}
	else
	{
		cout<<"unsorted"<<endl;
	}

	if(issorted2(a,n))
	{
		cout<<"sorted"<<endl;
	}
	else
	{
		cout<<"unsorted"<<endl;
	}



	return 0;
}













