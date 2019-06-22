#include<iostream>
using namespace std;


void welcome()
{
	cout<<"HELLO WORLD"<<endl;
	return;
}

int sum(int a,int b)
{
	// int s=a+b;
	// return s;
	return a+b;
}

void sum1(int a=0,int b=0,int c=0)   //default arguments
{
	cout<<a+b+c<<endl;
	return;
}


int main()
{
	welcome();
	welcome();
	// int p=sum(3,4);
 //    cout<<p<<endl;
    cout<<sum(3,4)<<endl;
    sum1(3,4,5);
    sum1(3,4);
    sum1(3);
    sum1();

















   return 0;
}