#include "node.h"

template <typename T>
class stack
{
public:
	node<T>* head;
	int cs;

	stack()
	{
	   head=NULL;
	   cs=0;
	}

	void push(T data)
	{
		if(head==NULL)
		{
			node<T>* n=new node<T>(data);
			head=n;
			cs++;
		}

		else
		{
			node<T>* n=new node<T>(data);
			n->next=head;
			head=n;
			cs++;
		}
	}


	void pop()
	{
		if(cs>0)
		{
			node<T>* temp=head;
			head=head->next;
			delete temp;
			cs--;
		}
	}

	T top()
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
