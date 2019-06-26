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

int sum(int *a,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(a+i);
	}
	return sum;
}


void selectionsort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(*(a+min)>*(a+j))
			{
				min=j;
			}
		}

		swap(*(a+i),*(a+min));
	}
	return; 
}




int main()
{
	int arr[] ={6,5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	printarray(arr,n);
	cout<<sum(arr,n)<<endl;
    selectionsort(arr,n);
    printarray(arr,n);







	return 0;
}