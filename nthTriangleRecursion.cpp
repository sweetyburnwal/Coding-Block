#include<iostream>
using namespace std;

int isTriangular(int n)
{
	if(n==0)
	{
		return 0;
	}
	int num=0;
	for(int i=0;i<n;i++)
	{
		num=n+isTriangular(n-1);
	}
	return num;
}

int main()
{
	int n;
	cin>>n;
	int ans=isTriangular(n);
	cout<<ans<<endl;
	return 0;
}
