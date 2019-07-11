// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};

void InsertAtFront(node* &head,node* &tail,int data){
	if(head == NULL){
		node* n = new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		n->next = head;
		head =n;
	}
}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head == NULL){
		node* n = new node(data);
		head = tail = n;
	}
	else{
		node* n=new node(data);
		tail->next = n;
		tail = n;
	}	

}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<endl;
}

int length(node* head){
	int count=0;

	while(head){
		count++;
		head=head->next;
	}
	return count;
}

int main(){
	node* head=NULL;
	node* tail=NULL;


	InsertAtFront(head,tail,0);
	InsertAtFront(head,tail,1);
	InsertAtFront(head,tail,2);
	InsertAtFront(head,tail,3);
	InsertAtEnd(head,tail,4);
	InsertAtEnd(head,tail,5);

	Print(head);
	cout<<"Length : "<<length(head)<<endl;


	return 0;
}