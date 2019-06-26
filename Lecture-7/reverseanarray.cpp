#include<iostream>
using namespace std;

void printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return;
}


void reverse(int *arr,int n)
{
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	return;
}



int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	printarray(arr,n);
	reverse(arr,n);
	printarray(arr,n);
	return 0;
}
