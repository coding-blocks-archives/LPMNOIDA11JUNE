// Generic_AdjList
#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <list>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > h;

	void DFSHelper(T node,map<T,bool> &visited){
		cout<<node<<",";
		visited[node]=true;

		for(auto neighbours:h[node]){
			if(!visited[neighbours]){
				DFSHelper(neighbours,visited);
			}
		}
	}
public:
	void addEdge(T u,T v,bool bidir=true){
		h[u].push_back(v);
		if(bidir){
			h[v].push_back(u);
		}
	}

	void Print(){
		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<neighbours<<",";
			}
			cout<<endl;
		}
	}

	void BFS(T src){
		queue<T> q;
		unordered_map<T,bool> visited;
		q.push(src);
		visited[src] = true;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<",";
			for(auto children:h[node]){
				if(!visited[children]){
					visited[children]=true;
					q.push(children);
				}
			}
		}
		cout<<endl;
	}

	void DFS(T src){
		map<T,bool> visited;
		int component = 1;
		DFSHelper(src,visited);

		for(auto node:h){
			if(!visited[node.first]){
				DFSHelper(node.first,visited);
				component++;
			}
		}

		cout<<endl<<"Number of components : "<<component<<endl;
	}

};

int main(){
	// Graph<string> g;
	Graph<int> g;

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(3,2);
	g.addEdge(3,5);
	g.addEdge(30,50);
	g.addEdge(30,51);
	g.addEdge(500,20);
	g.addEdge(21,500);

	// g.BFS(0);
	g.DFS(0);















	// g.addEdge("Modi","Trump");
	// g.addEdge("Modi","Putin",true);
	// g.addEdge("Trump","Yogi");
	// g.addEdge("Yogi","Modi");

	// g.Print();






	
	
	return 0;
}