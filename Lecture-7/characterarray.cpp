#include<iostream>
using namespace std;

void readline(char *s,char delimiter='\n')
{
	int i=0;
	char ch=cin.get();
	while(ch!=delimiter)
	{
		s[i]=ch;
		i++;
		ch=cin.get();
	}
	s[i]='\0';
}


int length(char arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{

	}
	return i;
}


int main()
{
	char ch[]={'A','B','C','\0'};
	char str[1000];
	// cin.getline(str,1000,'$');
	// cout<<str<<endl;
	char s[10000];
	cin>>s;
	cout<<length(s)<<endl;
    // readline(s,'$');
    // cout<<s<<endl;
	// cout<<ch<<endl;
	// char ch1[11]="helloworld";
	// cout<<ch1<<endl;
	return 0;
}