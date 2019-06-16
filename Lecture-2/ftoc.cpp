#include<iostream>
using namespace std;

int main()
{
	int initial,final,step;
	cin>>initial>>final>>step;
	int f=initial;
    while(f<=final)
    {
    	int c=(5.0/9)*(f-32);
    	cout<<f<<" "<<c<<endl;
    	f=f+step;
    }
	return 0;
}