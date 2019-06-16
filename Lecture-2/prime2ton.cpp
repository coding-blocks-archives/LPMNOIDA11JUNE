#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i=2;
	while(i<=n)
	{
		int flag=0;
        int no=2;
        while(no<i)
        {
        	if(i%no==0)
        	{
               flag=1;
        	}
        	no++;
        }
        if(flag!=1)
        {
        	cout<<i<<" ";
        }

		i++;

	}
	cout<<endl;

    return 0;


}