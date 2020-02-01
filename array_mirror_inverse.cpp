#include<iostream>
using namespace std;

bool isMirrorInverse(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		//if condition fails for any element
		if(arr[arr[i]]!=i)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[10000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(isMirrorInverse(arr,n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}
