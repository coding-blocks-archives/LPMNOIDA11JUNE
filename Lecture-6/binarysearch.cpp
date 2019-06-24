#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int data)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
    	int mid=(s+e)/2;
    	if(a[mid]==data)
    	{
    		return mid;
    	}
    	else if(a[mid]>data)
    	{
    		e=mid-1;
    	}
    	else
    	{
    		s=mid+1;
    	}
    }
    return -1;
}

int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
    int data;
    cin>>data;
    if(binarysearch(a,n,data)==-1)
    {
    	cout<<"element not found"<<endl;
    }
    else
    {
    	cout<<"element at"<<binarysearch(a,n,data)<<endl;
    }

    return 0;

}