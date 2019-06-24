#include<iostream>
using namespace std;


int main()
{
	// int a=10;
	// cout<<a<<endl;
	// cout<<&a<<endl;

	// int *ptr;
	// ptr=&a;
	// cout<<ptr<<endl;

	// int a[]={1,2,3,4,5,6};

 //    cout<<a<<endl;
 //    cout<<&a<<endl;
 //    cout<<&a[0]<<endl;

    
      int a=10;
      int *iptr=&a;

      cout<<&a<<endl;
      cout<<iptr<<endl;
      cout<<(iptr+1)<<endl;

      float b=2.01;
      float *bptr=&b;

      // cout<<&b<<endl;
      // cout<<bptr<<endl;
      
      char ch='A';
      char *chptr=&ch;
      
      int *cptr=(int *)&ch;





      // cout<<(void *)&ch<<endl;
      // cout<<(int *)chptr<<endl;





















	return 0;
}