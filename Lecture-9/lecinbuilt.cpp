#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char a[100];
	cin>>a;
	int l=strlen(a);
	cout<<strlen(a)<<endl;


	char res[1000];
	strcpy(res,a);
	cout<<res<<endl;

	char b[1000];
	cin>>b;

	strcat(a,b);
	cout<<a<<endl;

	return 0;
}