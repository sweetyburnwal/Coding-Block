#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int row=1;
int value=1;
while(row<=n)
{
	if(row%2==0){
		value=0;
	}
		else
		{
		value=1;
     	}
}
int col=1;
while(col<=row)
{
	cout<<value;
	value=1-value;
	col=col+1;
}
cout<<"\n";
row=row+1;
return 0;
}
