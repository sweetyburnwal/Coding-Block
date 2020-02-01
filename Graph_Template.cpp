#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;

template<typename T>

class graph
{
    public:
		int v;
		map<T,list<T> >adjlist;
		
		void addEdge(T u,T v,bool bidir=true)
		{
			adjlist[u].push_back(v);
			if(bidir)
			{
				adjlist[v].push_back(u);
			}
		}
		
		void print()
		{
			for(auto node:adjlist)
			{
				cout<<node.first<<"--> ";
				for(auto child:node.second)
				{
					cout<<child<<" ";
				}
				cout<<endl;
			}
		}
		
		void bfs(T src)
		{
			map<T,bool> visited;
		    for(auto node:adjlist)
		    {
		    	visited[node.first]=false;
			}
			
			queue<T>q;
			q.push(src);
			visited[src]=true;
			
			while(!q.empty())
			{
				T top=q.front();
				q.pop();
				
				cout<<top<<" ";
				for(auto child:adjlist[top])
				{
					if(!visited[child])
					{
						q.push(child);
						visited[child]=true;
					}
				}
			}
		}
		
		int SSSP(T src,T dest)    //SSSP=single source sorted path 
		{
			map<T,int> distance;     //T is for destination
			map<T,T>parent;
			
			for(auto node:adjlist)
			{
			    distance[node.first]=INT_MAX;
			}
			distance[src]=0;
			queue<T> q;
			
			parent[src]=src;
			q.push(src);
			
			while(!q.empty())
			{
				T top=q.front();
				q.pop();
				
				for(auto child:adjlist[top])
				{
					if(distance[child]==INT_MAX)
					{
						distance[child]=distance[top]+1;
						q.push(child);
						parent[child]=top;
					}
				}
			}
			
			cout<<"path is"<<endl;
			T temp=dest;
			while(temp!=src)
			{
				cout<<temp<<"<-- ";
				temp=parent[temp];
			}
			cout<<src<<endl;
			
			cout<<"shortest distance is: ";
			return distance[dest];
		}
		
		void DFShelper(T src,map<T,bool> &visited)
		{
			cout<<src<<" ";
			visited[src]=true;
			
			for(auto child:adjlist[src])
			{
				if(!visited[child])
				{
					DFShelper(child,visited);
				}
			}
		}
		
		void DFS(T src)
		{
			map<T,bool>visited;
			DFShelper(src,visited);
			int component=1;
			
			for(auto node:adjlist)
			{
				if(!visited[node.first])
				{
					component++;
					DFShelper(node.first,visited);
				}
			}
			cout<<"no of component "<<component<<endl;
		}
};

int main()
{
	//graph<string> g;
	//g.addEdge("modi","yogi");
	//g.addEdge("modi","trump");
	//g.addEdge("prabhu","modi",false);
    //g.addEdge("yogi","prabhu",false);
    //g.addEdge("putin","trump",false);
	//g.addEdge("putin","modi",false);
	//g.addEdge("putin","pope",false);
	
	graph<int> g;
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	
	g.print();
	
	//g.bfs(0);
	
	cout<<endl;
	cout<<g.SSSP(0,2)<<endl;
	
	g.DFS(0);
	
	return 0;
	
}
