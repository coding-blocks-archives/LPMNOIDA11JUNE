#include<iostream>
using namespace std;

char ch[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void inttostring(int n)
{
	//base case
	if(n==0)
	{
		return;
	}

    int index=n%10;
    inttostring(n/10);
    cout<<ch[index]<<" ";

}


int main()
{
	int n;
	cin>>n;
	inttostring(n);
	cout<<endl;
	return 0;
}	