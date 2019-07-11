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
// NULL == 0
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void InsertAtMid(node* &head,node* &tail,int pos,int data){
	if(pos == 0){
		InsertAtFront(head,tail,data);
	}
	else if(pos>=length(head)){
		InsertAtEnd(head,tail,data);
	}
	else{
		node* temp = head;
		int jump = 1;
		while(jump<=pos-1){
			temp = temp->next;
			jump++;
		}
		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void DeleteAtFront(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp=head;
		head=head->next;
		delete temp;
	}	
}


void DeleteAtEnd(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		while(temp->next!=tail){
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		tail->next = NULL;
	}	
}
void DeleteAtMid(node* &head,node* &tail,int pos){
	if(pos == 0){
		DeleteAtFront(head,tail);
	}
	else if(pos>=length(head)){
		return;
	}
	else{
		node* temp = head;
		int jump = 1;
		while(jump<=pos-1){
			temp = temp->next;
			jump++;
		}
		node* temp1 = temp->next;
		temp->next = temp1->next;
		delete temp1;
	}
}


int main(){
	node* head=NULL;
	node* tail=NULL;


	InsertAtEnd(head,tail,0);
	InsertAtEnd(head,tail,1);
	InsertAtEnd(head,tail,2);
	InsertAtEnd(head,tail,3);
	InsertAtEnd(head,tail,5);
	InsertAtEnd(head,tail,6);
	Print(head);
	DeleteAtMid(head,tail,3);
	Print(head);
	// InsertAtMid(head,tail,4,4);
	// Print(head);
	// DeleteAtFront(head,tail);
	// DeleteAtFront(head,tail);
	// Print(head);
	// DeleteAtEnd(head,tail);
	// Print(head);
	cout<<"Length : "<<length(head)<<endl;


	return 0;
}