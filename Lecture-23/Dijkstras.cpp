// Dijkstras
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <map>
#include <queue>
#include <set>
using namespace std;

template<typename T>
class Graph{
	unordered_map<T,list<pair<T,int> > > h;
public:
	void addEdge(T u,T v,int dist,bool bidir=true){
		h[u].push_back(make_pair(v,dist));
		if(bidir){
			h[v].push_back(make_pair(u,dist));
		}
	}

	void Print(){
		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto children:node.second){
				cout<<"("<<children.first<<","<<children.second<<")";
			}
			cout<<endl;
		}
	}

};

int main(){
	Graph<string> g;
	
	g.addEdge("Amritsar","Agra",1); 
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2); 
	g.addEdge("Delhi","Agra",1); 
	g.addEdge("Bhopal","Agra",2); 
	g.addEdge("Bhopal","Mumbai",3); 
	g.addEdge("Jaipur","Mumbai",8);


	g.Print();












	
	return 0;
}