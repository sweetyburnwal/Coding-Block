#include<iostream>
using namespace std;

int nGridWays(int i,int j)
{
	//base case
	if(i==0 && j==0)
	{
		return 1;
	}
	if(i<0 || j<0)   //cannot move from outside the grid i.e from above and left of grid
	{
		return 0;
	}
	//recursive case
	int ans=nGridWays(i-1,j)+nGridWays(i,j-1);    //can move only one step
	return ans;
}

int main()
{
	int i,j;
	cin>>i>>j;
	
	cout<<nGridWays(i,j)<<endl;
	return 0;
}
