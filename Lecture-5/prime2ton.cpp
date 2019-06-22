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

 void prime(int n)
 {
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    return;
 }










int main()
{
    int no;
    cin>>no;
    prime(no);
  return 0;

}