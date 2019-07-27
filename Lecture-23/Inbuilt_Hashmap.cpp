// Inbuilt_Hashmap
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

int main(){
	// unordered_map<typeof_key,typeof_value> name;
	map<string,int> h;

	// In hashmap we insert key-value pair
	pair<string,int> p("Mango",100);
	// p.first = "Pineapple";
	// cout<<p.first<<endl; // this will print the key
	// cout<<p.second<<endl; // this will print the value
	
	h.insert(p); // Create a pair then insert in hashmap
	h.insert(make_pair("Pineapple",50)); // use make_pair to create a pair
	h.insert(make_pair("Apple",150));
	h.insert(make_pair("Guava",60));
	h["Kiwi"] = 40; // Insertion
	h["Kiwi"] = 400; // Updation
	cout<<h["Kiwi"]<<endl;
	cout<<h["Mango"]<<endl;

	for(auto iterator:h){
		cout<<iterator.first<<"->"<<iterator.second<<endl;
	}









	// auto i = 10.10;
	// cout<<i<<endl;

	// list<int> l;

	// l.push_front(1);
	// l.push_front(2);
	// l.push_front(3);
	// l.push_front(4);

	// for(auto node:l){
	// 	cout<<node<<"-->";
	// }
	// cout<<endl;









	
	
	return 0;
}