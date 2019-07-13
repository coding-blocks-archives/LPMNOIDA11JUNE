#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next=NULL;

	node(int d):data(d),next(NULL)
	{}
};


class stack
{
public:
	node* head;
	int cs;

	stack()
	{
	   head=NULL;
	   cs=0;
	}

	void push(int data)
	{
		if(head==NULL)
		{
			node* n=new node(data);
			head=n;
			cs++;
		}

		else
		{
			node* n=new node(data);
			n->next=head;
			head=n;
			cs++;
		}
	}


	void pop()
	{
		if(cs>0)
		{
			node* temp=head;
			head=head->next;
			delete temp;
			cs--;
		}
	}

	int top()
	{
		return head->data;
	}

	bool empty()
	{
		return cs==0;
	}

	int size()
	{
		return cs;
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
		cout<<s.top()<<endl;
		s.pop();	
	}
	return 0;
}





























