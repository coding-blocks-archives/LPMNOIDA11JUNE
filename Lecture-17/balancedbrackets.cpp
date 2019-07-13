#include<stack>
#include<iostream>
using namespace std;

bool balancedBrackets(char *ch)
{
	stack<char>s;
	for(int i=0;ch[i]!='\0';i++)
	{
		switch(ch[i])
		{
			case '(':
			case '{':
			case '[':
						s.push(ch[i]);
						break;

			case ')': if(!s.empty() && s.top()=='(')
						{
							s.pop();
						}
						else
						{
							return false;
						}
						break;
			case ']': if(!s.empty() && s.top()=='[')
						{
							s.pop();
						}
						else
						{
							return false;
						}
						break;
			case '}': if(!s.empty() && s.top()=='{')
						{
							s.pop();
						}
						else
						{
							return false;
						}
		}
	}

	if(s.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	char ch[]="{a*(b+c)}";
	if(balancedBrackets(ch))
	{
		cout<<"Balanced"<<endl;
	}
	else
	{
		cout<<"Unbalanced"<<endl;
	}
	return 0;
}