#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};



void insertionAtFront(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node *n=new node(d);
		head=n;
		tail=n;
	}
	else
	{
		node* n=new node(d);
		n->next=head;
		head=n;
	}
}


void insertionAtEnd(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
	}
	else
	{
		node* n=new node(d);
		tail->next=n;
		tail=n;
	}
}

int length(node* head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}

	return len;
}


void insertionAtPos(node* &head,node* &tail,int data,int pos)
{
	if(pos==0)
	{
		insertionAtFront(head,tail,data);
	}

	else if(pos>=length(head))
	{
		insertionAtEnd(head,tail,data);
	}
	else
	{
		int p=1;
		node* temp=head;
		while(p<pos)
		{
			temp=temp->next;
			p++;
		}

		node* n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}


void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}




void deleteAtFront(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}

	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
		return;
	}


	else
	{
		node* temp=head;
		head=head->next;
		delete temp;
	}

}


void deleteAtEnd(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}

	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}

	else
	{
		node* n=head;
		while(n->next!=tail)
		{
			n=n->next;
		}

		delete tail;
		n->next=NULL;
		tail=n;
	}
}


void deleteAtPos(node* &head,node* &tail,int pos)
{
	if(pos==0)
	{
		deleteAtFront(head,tail);
		return;
	}

	else if(pos==length(head)-1)
	{
		deleteAtEnd(head,tail);
		return;
	} 

	else if(pos>=length(head))
	{
		return;
	}

	else
	{
		int p=1;
		node* prev=head;
		while(p<pos)
		{
			prev=prev->next;
			p++;
		}

		node* n=prev->next;
		prev->next=n->next;
		delete n;
	}
}


node* search(node* head,int d)
{
	while(head!=NULL)
	{
		if(head->data==d)
		{
			return head;
		}
		head=head->next;
	}

	return NULL;
}

node* searchRec(node* head,int d)
{
	if(head==NULL)
	{
		return NULL;
	}
	else if(head->data==d)
	{
		return head;
	}
	else
	{
		return searchRec(head->next,d);
	}

}

void createCycle(node* head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head->next->next;
}


bool detectCycle(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next;
		if(fast)
		{
			fast=fast->next;
			slow=slow->next;
			if(fast==slow)
			{
				return true;
			}
		}
	}

	return false;
}


void breakCycle(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			break;
		}
	}

	node* prev=head;
	while(prev->next!=fast)
	{
		prev=prev->next;
	}

	slow=head;
	while(slow!=fast)
	{
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}

	prev->next=NULL;
}





int main()
{

	node* head=NULL;
	node* tail=NULL;

	insertionAtFront(head,tail,7);
	insertionAtFront(head,tail,6);
	insertionAtFront(head,tail,5);
	insertionAtFront(head,tail,4);
	insertionAtFront(head,tail,3);
	insertionAtFront(head,tail,2);
	insertionAtFront(head,tail,1);


	createCycle(head);
	if(detectCycle(head))
	{
		cout<<"cycle exists"<<endl;
	}
	else
	{
		cout<<"no cycle "<<endl;
	}

	if(detectCycle(head))
	{
		breakCycle(head);
	}


	print(head);
	
	return 0;
}	