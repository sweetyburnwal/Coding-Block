#include<iostream>
#define m 4
#define n 4
using namespace std;

void rowsum(int arr[][])
{
	int i,j,sum=0;
	cout<<"\n finding sum of each row: \n\n";
	
	//finding the row sum
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//add the element
			sum=sum+arr[i][j];
		}
		//print the row sum
		cout<<"sum of the row"<<i<<"="<<sum<<endl;
		
		//reset the sum
		sum=0;
	}
}
void columnsum(int arr[][])
{
	int i,j,sum=0;
	cout<<"\n finding sum of each column: \n\n";
	
	//finding the column sum
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//add the element
			sum=sum+arr[j][i];
		}
		//print the column sum
		cout<<"sum of the column"<<j<<"="<<sum<<endl;
		
		//reset the sum
		sum=0;
	}
}
int main()
{
	int i,j,m,n;
	cin>>m;
	cin>>n;
	int arr[m][n];
	int value=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=value++;
		}
	}
	
	//get each row sum
	rowsum(arr);
	
	//get each column sum
	columnsum(arr);
	
	return 0;
}
