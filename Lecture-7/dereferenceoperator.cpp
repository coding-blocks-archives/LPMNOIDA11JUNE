#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *iptr=&a;
	cout<<a<<endl;
	cout<<iptr<<endl;
	cout<<*iptr<<endl;
	return 0;
}