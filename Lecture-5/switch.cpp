#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;
	switch(ch)
	{
		case 'm':
		case 'M': cout<<"Monday"<<endl;
                   break;
		case'T' : cout<<"tuesday "<<endl;
                   break;
		default: cout<<"invalid input"<<endl;
	}

	return 0;
}