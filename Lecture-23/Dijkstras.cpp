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

	void SSSP(T src,T des){
		map<T,int> dist;
		unordered_map<T,T> parent_map;
		set<pair<int,T> >s;

		for(auto node:h){
			dist[node.first] = INT_MAX;
		}
		dist[src] = 0;
		parent_map[src] = src;
		s.insert(make_pair(0,src));

		while(!s.empty()){
			auto p = (*s.begin());
			T parent = p.second;
			int parent_dist = p.first;

			s.erase(s.begin());
			for(auto children:h[parent]){
				if(dist[children.first]>dist[parent]+children.second){
					auto f = s.find(make_pair(dist[children.first],children.first));
					if(f!=s.end()){
						s.erase(f);
					}
					dist[children.first] =dist[parent]+children.second;
					parent_map[children.first] = parent;
					s.insert(make_pair(dist[children.first],children.first));
				}
			}
		}

		// for(auto node:dist){
		// 	cout<<"Distance of "<<node.first<<" from "<<src<<" is "<<node.second<<endl;
		// }
		T temp = des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent_map[temp];
		}
		cout<<src<<endl;
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


	// g.Print();
	g.SSSP("Amritsar","Mumbai");












	
	return 0;
}