#include<iostream>
#define PI 3.14+1
#define output cout<<
using namespace std;

int main()
{
    output 2*PI<<endl;
    const int p=6;
    // p=7;       //error

    // const int p;     //garbage fixed
    // p=10;
    cout<<p<<endl;
    char ch='A';
    int i=(int)ch;
    int g=ch;
    cout<<i<<endl;
    cout<<g<<endl;

    int k=789;
    char ch1=(char)k;
    cout<<ch1<<endl;


    k=90;
    ch1=(char)k;
    cout<<ch1<<endl;

    return 0;
}