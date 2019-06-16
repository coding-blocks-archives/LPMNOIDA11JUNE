#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	while(line<=n)
	{
        
        int spaces=1;
        while(spaces<=n-line)
        {
        	cout<<"  ";
        	spaces++;
        }
        
        int no=line;
        int ele=1;
        while(ele<=line)
        {
        	cout<<no<<" ";
        	no++;
        	ele++;
        }
        
        no=no-2;
        ele=1;
        while(ele<=line-1)
        {
        	cout<<no<<" ";
        	no--;
        	ele++;
        }
        
        cout<<endl;

		line++;
	}
}