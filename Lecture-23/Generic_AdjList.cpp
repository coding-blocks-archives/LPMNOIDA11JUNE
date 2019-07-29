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

	int SSSP(T src,T des){
		unordered_map<T,T> parent_map;
		map<T,int> dist;
		queue<T> q;
		for(auto node:h){
			dist[node.first] = INT_MAX;
		}
		dist[src] = 0;
		parent_map[src]=src;
		
		q.push(src);
		while(!q.empty()){
			T node = q.front();
			q.pop();

			for(auto children:h[node]){
				if(dist[children]==INT_MAX){
					dist[children]=dist[node]+1;
					q.push(children);
					parent_map[children] = node;
				}
			}
		}

		T temp = des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent_map[temp];
		}
		cout<<src<<endl;

		// for(auto node:dist){
		// 	cout<<"Distance of "<<node.first<<" from "<<src<<" is "<<dist[node.first]<<endl;
		// }
		return dist[des];
	}

};

int main(){
	// Graph<string> g;
	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	for(int u=0;u<=36;u++){
		for(int dice = 1;dice<=6;dice++){
			int v = u+dice+board[u+dice];
			g.addEdge(u,v,false);
		}
	}


	// g.addEdge(0,1);
	// g.addEdge(2,1);
	// g.addEdge(2,4);
	// g.addEdge(0,4);
	// g.addEdge(3,4);
	// g.addEdge(3,2);
	// g.addEdge(3,5);
	// g.addEdge(30,50);
	// g.addEdge(30,51);
	// g.addEdge(500,20);
	// g.addEdge(21,500);

	// g.BFS(0);
	cout<<g.SSSP(0,36)<<endl;















	// g.addEdge("Modi","Trump");
	// g.addEdge("Modi","Putin",true);
	// g.addEdge("Trump","Yogi");
	// g.addEdge("Yogi","Modi");

	// g.Print();






	
	
	return 0;
}