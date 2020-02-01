#include<iostream>
using namespace std;
bool check(int);
int main ()
{
	int N;
	cin>>N;
	cout<<2;
	for(int i=3;i<=N;i++)
	{
		if(check(i))
		cout<<","<<" "<<i;
	}
}
bool check(int number)
{

	for(int i=2;i<number;i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}
	return true;
}
