#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
		{
			cout<<col;
			col=col+1;
		}
		int star=1;
		while(star<=n-row)
		{
			cout<<"*"<<" ";
			star=star+1;
		}
		cout<<"\n";
		row=row+1;
	}
	return 0;
}
