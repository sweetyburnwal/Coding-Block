#include<iostream>
using namespace std;
bool checkReverse(int a1[], int a2[], int n);
int main()
{
	int n;
	cin>>n;
	int a1[n],a2[n];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>a2[i];
	}
	bool ans= checkReverse(a1,a2,n);
	cout<<ans;
	return 0;
}
bool checkReverse(int a1[], int a2[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a1[i]!=a2[n-i-1])
		{
			return false;
		}
	}
	return true;
}





