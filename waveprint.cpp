#include<iostream>
using namespace std;

void readMatrix(int a[][10],int R,int C)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cin>>a[i][j];
		}
	}
}
void printMatrix(int a[][10],int R,int C)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl; 
	}
}
void wavePrint(int a[][10],int R,int C)
{
	for(int j=0;j<C;j++)
	{
		if(j%2==1)
		{
			//odd column
			for(int i=R-1;i>=0;i--)
			{
				cout<<a[i][j]<<" ";
			}
		}
		else
		{
			//even column
			for(int i=0;i<R;i++)
			{
				cout<<a[i][j]<<" ";
			}
		}
	}
}
int main()
{
	int a[10][10];
	int R,C;
	cin>>R>>C;
	
	readMatrix(a,R,C);

	printMatrix(a,R,C);

	wavePrint(a,R,C);
	
	return 0;
}
