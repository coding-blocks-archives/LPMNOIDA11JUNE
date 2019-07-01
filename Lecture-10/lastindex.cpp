#include<iostream>
using namespace std;

int lastindex(int *a,int n,int data,int i)
{

    if(i==n)
    {
    	return -1;
    }
    
    int abhiwalaindex,nextwalaindex;
	if(a[i]==data)
	{
		abhiwalaindex=i;
		nextwalaindex=lastindex(a,n,data,i+1);
		if(nextwalaindex>abhiwalaindex)
		{
			abhiwalaindex=nextwalaindex;
		}
		return abhiwalaindex;
	}

	return lastindex(a,n,data,i+1);

}



int main()
{
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    
    int data;
    cin>>data;
    
    cout<<lastindex(a,n,data,0)<<endl;

	return 0;

}	
