#include<iostream>
using namespace std;

int firstindex(int *a,int n,int data,int i)
{

	if(i==n)
	{
		return -1;
	}

	if(a[i]==data)
	{
		return i;
	}

	return firstindex(a,n,data,i+1);
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
    
    cout<<firstindex(a,n,data,0)<<endl;

	return 0;

}	








