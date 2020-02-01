#include<iostream>
using namespace std;

void initMatrix(int a[][10],int R,int C)
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
		//for every row,we have to iterate over every column
		for(int j=0;j<C;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;  //new line after every row
	}
}
void spiralPrint(int a[][10],int R,int C)
{
	int startrow=0,endrow=R-1,startcol=0,endcol=C-1;
	while(startrow<=endrow && startcol<=endcol)
	{
		//print startrow first
		for(int j=startcol;j<=endcol;j++)
		{
			cout<<a[startrow][j]<<" ";
		}
		startrow++;
		
		//print endcol
		for(int i=startrow;i<=endrow;i++)
		{
			cout<<a[i][endcol]<<" ";
		}
		endcol--;
		
		//print endrow-make sure it is printed if endrow>startrow
		if(endrow>=startrow)
		{
	     for(int j=endcol;j>=startcol;j--)
		{
			cout<<a[endrow][j]<<" ";
		}
		endrow--;
	    }
	
		//print startcol
		if (startcol<=endcol)
		{
		for(int i=endrow;i>=startrow;i--)
		{
			cout<<a[i][startcol]<<" ";
		}
		startcol++;
	}
	}
}
		
int main()
{
	int a[10][10];
	int R,C;
	cin>>R>>C;
	
	//read the matrix
	initMatrix(a,R,C);
	
	//print the matrix
	printMatrix(a,R,C);
	
	//spiral print
	spiralPrint(a,R,C);
	
	return 0;
}
