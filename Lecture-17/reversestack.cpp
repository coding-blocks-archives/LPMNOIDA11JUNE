#include<iostream>
#include<stack>

using namespace std;

void pushBottom(stack<int> &s,int topele)
{
	if(s.empty())
	{
		s.push(topele);
		return;
	}
	
	int tele=s.top();
	s.pop();
	pushBottom(s,topele);
	s.push(tele);	
}




void reverse(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}

	int topele=s.top();
	s.pop();
	reverse(s);
	pushBottom(s,topele);
}




void print(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main()
{
	stack<int>s;
	for(int i=0;i<7;i++)
	{
		s.push(i);
	}
	print(s);
	reverse(s);
	print(s);
	return 0;
}