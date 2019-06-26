#include<iostream>
using namespace std;

int length(char arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{

	}
	return i;
}
bool pallindrome(char *s)
{
    int i=0;
    int j=length(s)-1;
    while(i<=j)
    {
    	if(s[i]==s[j])
    	{
    		i++;
    		j--;
    	}
    	else
    	{
    		return false;
    	}
    }
    return true;
}

int main()
{
	char s[1000];
	cin.getline(s,1000);
    if(pallindrome(s))
    {
    	cout<<"pallindrome"<<endl;
    }
    else
    {
    	cout<<"not a pallindrome"<<endl;
    }
    return 0;
}