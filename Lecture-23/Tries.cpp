// Tries
#include <iostream>
#include <unordered_map>
using namespace std;

class node{
	public:
	char ch;
	bool isTerminal;
	unordered_map<char,node*> h;

 	node(char c){
 		ch = c;
 		isTerminal = false;
 	}
};

class Trie{
	node* root;
public:
	Trie(){
		root = new node('\0');
	}

	void addWord(char* word){
		node* temp =root;
		for(int i=0;word[i]!='\0';i++){
			char ch = word[i];
			if(temp->h.count(ch)==1){
				temp=temp->h[ch];
			}
			else{
				temp->h[ch] = new node(ch);
				temp=temp->h[ch];
			}
		}
		temp->isTerminal = true;
	}

	bool searchWord(char *word){
		node* temp = root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];
			if(temp->h.count(ch)==0){
				return false;
			}
			else{
				temp=temp->h[ch];
			}
		}

		return temp->isTerminal;
	}
};

int main(){
	Trie t;

	t.addWord("Hello");
	t.addWord("Hell");
	t.addWord("Code");
	t.addWord("Coding");
	t.addWord("Coder");
	char ch[100];

	while(1){
		cin>>ch;

		if(t.searchWord(ch)){
			cout<<"Found"<<endl;
		}
		else{
			cout<<"Not Found"<<endl;
		}
	}










	
	
	return 0;
}