#include<iostream>
using namespace std;

int main()
{
	char ch='A';
	cout<<ch+1<<endl;
	// ch=ch+1;
	// cout<<ch<<endl;
	int i=1;
	while(i<=5)
	{
		cout<<ch<<" ";
		ch++;
		i++;
	}

	return 0;
}