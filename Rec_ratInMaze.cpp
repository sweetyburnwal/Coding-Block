#include<iostream>
using namespace std;

bool ratInMaze(char maze[][5],int i,int j,int n,int m,int sol[][10])
{
	if(i==n-1 && j==m-1)
	{
		sol[i][j]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		//return true;
		return false;
	}
	
	sol[i][j]=1;
	if(j+1<m && maze[i][j+1]!='x')
	{
		bool kyaRightMeinRakhPaye=ratInMaze(maze,i,j+1,n,m,sol);
		if(kyaRightMeinRakhPaye)
		{
			return true;
		}
	}
	if(i+1<n && maze[i+1][j]!='x')
	{
		bool kyaNicheRakhPaye=ratInMaze(maze,i+1,j,n,m,sol);
		if(kyaNicheRakhPaye)
		{
			return true;
		}
	}
	
	sol[i][j]=0;
	return false;
	
}

int main()
{
	char maze[4][5]={{"00xx"},{"0000"},{"00xx"},{"0000"}};
	int sol[10][10]={0};
	ratInMaze(maze,0,0,4,4,sol);
	return 0;
}
