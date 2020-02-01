#include<iostream>
using namespace std;

int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	int smallAns=power(x,n/2);
	smallAns*=smallAns;
	if(n%2==1)
	{
		return x*smallAns;
	}
	return smallAns;
}

int main()
{
	int x,n;
	cin>>x;
	cin>>n;
	cout<<power(x,n);
	return 0;
}
