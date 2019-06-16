#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	while(line<=n)
	{
		char ch='A';
		int ele=1;
		while(ele<=line)
		{
			cout<<ch<<" ";
			ch++;
			ele++;
		}
		cout<<endl;
		line++;
	}
	return 0;
}