// BinaryTrees
#include <iostream>
#include <queue>
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

node* CreateTree(){
	int data;
	cin>>data;
	if(data == -1){
		return NULL;
	}

	node* root = new node(data);
	root->left = CreateTree();
	root->right = CreateTree();

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

int CountNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return CountNodes(root->left)+CountNodes(root->right)+1;
}

int Height(node* root){
	if(root == NULL){
		return 0;
	}

	int left = Height(root->left);
	int right = Height(root->right);
	return max(left,right)+1;
}

int Diameter(node* root){
	if(root == NULL){
		return 0;
	}

	int op1 = Height(root->left) + Height(root->right);
	int op2 = Diameter(root->left);
	int op3 = Diameter(root->right);
	return max(op1,max(op2,op3));
}

class Pair{
public:
	int height;
	int diameter;
};

Pair FastDiameter(node* root){
	Pair p;
	if(root == NULL){
		p.height = p.diameter = 0;
		return p;
	}

	Pair left = FastDiameter(root->left);
	Pair right= FastDiameter(root->right);

	p.height = max(left.height,right.height)+1;

	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1,max(op2,op3));
	return p;
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

void Mirror(node* root){
	if(root == NULL){
		return;
	}

	swap(root->left,root->right);
	Mirror(root->left);
	Mirror(root->right);
}

node* BuildTreeLevelOrder(){
	node* root;
	int data;
	cout<<"Enter the data for root node : ";
	cin>>data;
	root = new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();

		cout<<"Enter the children of "<<temp->data<<" ";
		int c1,c2;
		cin>>c1>>c2;
		if(c1!=-1){
			temp->left = new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right = new node(c2);
			q.push(temp->right);
		}
	}
	return root;
}

int pre[]={8,10,1,6,4,7,3,14,13};
int i = 0;

node* BuildTree(int *in,int s,int e){
	// Base case
	if(s>e){
		return NULL;
	}
	// Recrusive case
	int data = pre[i];
	i++;
	node* root = new node(data);
	int k = -1;
	for(int j=s;j<=e;j++){
		if(in[j] == data){
			k = j;
			break;
		}
	}
	root->left = BuildTree(in,s,k-1);
	root->right= BuildTree(in,k+1,e);
	return root;
}

int main(){
	node* root = NULL;
	// root = CreateTree();
	// root = BuildTreeLevelOrder();
	int in[]={1,10,4,6,7,8,3,13,14};
	int n=sizeof(in)/sizeof(int);
	root = BuildTree(in,0,n-1);

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	LevelOrderPrint(root);
	Mirror(root);
	LevelOrderPrint(root);
	// cout<<"Number of Nodes : "<<CountNodes(root)<<endl;
	// cout<<"Height of Tree : "<<Height(root)<<endl;
	// cout<<"Diameter of Tree : "<<Diameter(root)<<endl;

	// Pair p =FastDiameter(root);
	// cout<<"Height of Tree : "<<p.height<<endl;
	// cout<<"Diameter of Tree : "<<p.diameter<<endl;	

	return 0;
}