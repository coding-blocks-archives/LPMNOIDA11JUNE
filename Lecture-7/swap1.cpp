#include<iostream>
using namespace std;

void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	return;
}

int main()
{
	int a=10,b=15;
	cout<<"elements before swapping"<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"elements after swapping "<<a<<" "<<b<<endl;
	return 0;
}