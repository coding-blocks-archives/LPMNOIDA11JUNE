// BinaryTrees
#include <iostream>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;

class node{
public:	
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* InsertInBST(node* root,int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(data<=root->data){
		root->left=InsertInBST(root->left,data);
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}


node* BuildTree(){
	node* root=NULL;

	int data;
	cin>>data;

	while(data!=-1){
		root = InsertInBST(root,data);

		cin>>data;
	}
	return root;
}

void PreOrder(node* root){
	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if(root == NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}

void PostOrder(node* root){
	if(root == NULL){
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

void LevelOrderPrint(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";

			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

bool isBST(node* root,int MIN=INT_MIN,int MAX=INT_MAX){
	// Base case	
	if(root == NULL){
		return true;
	}
	// Recursive case	
	if(root->data<=MAX && root->data>=MIN && isBST(root->left,MIN,root->data) && isBST(root->right,root->data,MAX)){
		return true;
	}
	else{
		return false;
	}
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	Pair p;
	if(root == NULL){
		p.height =0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);
	p.height = max(left.height,right.height)+1;

	if(left.balanced && right.balanced && abs(left.height-right.height)<=1){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}
	return p;
}

node* ArrayToBST(int *arr,int s,int e){
	if(s>e){
		return NULL;
	}

	int mid = (s+e)/2;
	node* root = new node(arr[mid]);
	root->left = ArrayToBST(arr,s,mid-1);
	root->right = ArrayToBST(arr,mid+1,e);
	return root;
}

int main(){
	node* root = NULL;
	int arr[]={1,3,4,5,6,7,8,9,10,11,12,13};
	int n = sizeof(arr)/sizeof(int);

	root = ArrayToBST(arr,0,n-1);

	Pair p = isBalanced(root);
	if(p.balanced){
		cout<<"balanced"<<endl;
	}
	else{
		cout<<"Not balanced"<<endl;
	}
	cout<<p.height<<endl;

	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	LevelOrderPrint(root);


	return 0;
}