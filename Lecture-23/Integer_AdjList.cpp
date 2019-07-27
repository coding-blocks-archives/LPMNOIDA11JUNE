// Integer_AdjList
#include <iostream>
#include <list>
using namespace std;

class Graph{
	list<int>* l;
	int v;
public:
	Graph(int V){
		v = V;
		l = new list<int>[v];
	}

	void addEdge(int u,int v,bool bidir = true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}

	void Print(){
		for(int i=0;i<v;i++){
			cout<<i<<"-->";
			for(auto neighbour:l[i]){
				cout<<neighbour<<", ";
			}
			cout<<endl;
		}
	}

};

int main(){

	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(0,2);
	g.addEdge(0,3);


	g.Print();







	
	
	
	return 0;
}