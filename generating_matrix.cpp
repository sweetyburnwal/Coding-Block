#include<iostream>
using namespace std;
int main()
{
	int mat[10][10],rows,cols,i,j,key;
	cin>>rows>>cols>>key;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		    if(mat[i][j]==key)
			{
			   cout<<"found"<<endl;
			   break;	
			}	
		}
		if(j!=cols)
		{
			break;
		}
	}
	if(i==rows){
		cout<<"element not found"<<endl;
	}
	return 0;
}
