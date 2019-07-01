#include<iostream>
using namespace std;

int fib(int index)
{
	//base case
	if(index==0 || index==1)
	{
		return index;
	}

	//recursive case

	int ans=fib(index-1)+fib(index-2);
	return ans;
}


int main()
{
	int index;
	cin>>index;
    cout<<fib(index)<<endl;
	return 0;
}









