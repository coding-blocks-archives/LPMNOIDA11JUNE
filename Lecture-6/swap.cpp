#include<iostream>
using namespace std;

// void swap(int &a1,int &b1)
// {
// 	int temp=a1;
// 	a1=b1;
// 	b1=temp;
// 	cout<<"elements inside swap func "<<a1<<" "<<b1<<endl;
// 	return;
// }

int main()
{
	int a=10,b=5;
	cout<<"elements before swap are "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"elements after swapping are "<<a<<" "<<b<<endl;
	return 0;
}

void swap(int a1,int b1)
{
	int temp=a1;
	a1=b1;
	b1=temp;
	cout<<"elements inside swap func "<<a1<<" "<<b1<<endl;
	return;
}





