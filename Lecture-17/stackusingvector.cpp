#include<iostream>
#include<vector>

using namespace std;


class stack
{
public:
	vector<int>v;

	void push(int d)
	{
		v.push_back(d);
	}

	void pop()
	{
		v.pop_back();
	}

	int top()
	{
		return v[v.size()-1];
	}

	bool empty()
	{
		return v.size()==0;
	}

	int size()
	{
		return v.size();
	}


};


int main()
{
	stack s;
	for(int i=0;i<9;i++)
	{
		s.push(i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}









