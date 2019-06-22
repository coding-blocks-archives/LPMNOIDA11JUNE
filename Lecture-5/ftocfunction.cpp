#include<iostream>
using namespace std;

void ftoc(int i,int f,int s)
{
   while(i<=f)
   {
   	  int c=(5.0/9)*(i-32);
   	  cout<<i<<" "<<c<<endl;
   	  i+=s;
   }  
   return;
} 



int main()
{
	int initial,final,step;
	cin>>initial>>final>>step;
    ftoc(initial,final,step);





    
    return 0;
}