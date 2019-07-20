// Hashmap
#include <iostream>
using namespace std;

class node{
public:
	string key;
	int value;
	node* next;
	node(string k,int v){
		key = k;
		value = v;
		next = NULL;
	}
};

class hashmap{
	node** Bucket;
	int ts;
	int cs;

	int hashFn(string key){
		int ans = 0;
		int mul_factor = 1;

		for(int i=0;key[i]!='\0';i++){
			ans += key[i]*mul_factor;
			mul_factor *= 37;

			ans%=ts;
			mul_factor%=ts;
		}
		return ans%ts;
	}

	void rehash(){
		node** oldBucket = Bucket;
		int oldts = ts;

		Bucket = new node*[2*ts];
		ts = 2*ts;
		cs = 0;
		for(int i=0;i<ts;i++){
			Bucket[i] = NULL;
		}

		for(int i=0;i<oldts;i++){
			node* head = oldBucket[i];
			while(head){
				insert(head->key,head->value);
				head=head->next;
			}

			delete oldBucket[i];
		}
		delete []oldBucket;
	}

public:
	hashmap(int s=7){
		cs = 0;
		ts = s;
		Bucket = new node*[ts];
		for(int i=0;i<ts;i++){
			Bucket[i] = NULL;
		}
	}

	void insert(string key,int value){
		int i = hashFn(key);

		node* n = new node(key,value);
		n->next = Bucket[i];
		Bucket[i] = n;
		cs++;

		float load_factor = cs/(ts*1.0);
		if(load_factor>0.7){
			rehash();
		}
	}

	int* search(string key){
		int i = hashFn(key);
		node* head = Bucket[i];

		while(head){
			if(head->key == key){
				return (&head->value);
			}
			head = head->next;
		}
		return NULL;
	}

	int& operator[](string key){
		int* ans = search(key);
		if(ans == NULL){
			int garbage;
			insert(key,garbage);
			ans = search(key);
			return *ans;
		}
		else{
			return *ans;
		}
	}

	void Print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"-->";
			node* head = Bucket[i];
			while(head){
				cout<<"("<<head->key<<","<<head->value<<")";
				head = head->next;
			}
			cout<<endl;
		}
	}
};


int main(){

	hashmap h;

	h.insert("Mango",100);
	h.insert("Apple",150);
	h.insert("Banana",50);
	h.insert("Guava",30);
	h.insert("Kiwi",60);
	h["PineApple"] = 70;
	h["PineApple"] = 170;

	cout<<h["PineApple"]<<endl;
	h.Print();



















	return 0;
}