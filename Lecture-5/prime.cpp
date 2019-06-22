#include<iostream>
using namespace std;

bool isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
    int no;
    cin>>no;
    if(isprime(no))
    {
    	cout<<"prime "<<endl;
    }
    else 
    {
    	cout<<"not prime"<<endl;
    }

  return 0;

}