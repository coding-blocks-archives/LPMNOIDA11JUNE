#include<iostream>
using namespace std;

void mergesortedarray(int a[],int m,int b[],int n)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0)
    {
    	if(a[i]>=b[j])
    	{
    		a[k]=a[i];
    		k--;
    		i--;
    	}
    	else if(a[i]<b[j])
    	{

    		a[k]=b[j];
    		k--;
    		j--;
    	}
    }

    while(j>=0)
    {
    	a[k]=b[j];
    	k--;
    	j--;
    }


    while(i>=0)
    {
    	a[k]=a[i];
    	k--;
    	i--;
    }


	return;
}

int main()
{
	int a[5]={2,3,9};
	int b[2]={1,7};

    mergesortedarray(a,3,b,2);
    for(int i=0;i<5;i++)
    {
    	cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}