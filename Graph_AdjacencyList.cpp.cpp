#include<iostream>
#include<list>
using namespace std;

class graph
{
public:
	int v;
	list<int> *adjlist;      //list<int>=datatype
	
	graph(int n)     //n=no of nodes
	{
		v=n;
		adjlist=new list<int> [n];
	}
	
	void addEdge(int u,int v,bool bidir=true)    //u and v are two vertices
	{
		adjlist[u].push_back(v);
		if(bidir)
		{
			adjlist[v].push_back(u);
		}
	}
	
	void print()
	{
		for(int i=0;i<v;i++)
		{
			cout<<i<<"--> ";
			for(auto node:adjlist[i])   //forenge loop
			{
				cout<<node<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
	graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	
	g.print();
	
	return 0;
}
