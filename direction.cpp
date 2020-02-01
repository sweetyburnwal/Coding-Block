#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	int X=0,Y=0;
	if(ch=='E')
	{
		cout<<++X;
	}
	else if(ch=='W')
	{
		cout<<--X;
	}
	else if(ch=='N')
	{
		cout<<++Y;
	}
	else if(ch=='S')
	{
		cout<<--Y;
	}
	
}
