#include<iostream>
using namespace std;

bool search(int *a,int i,int n,int key)
{
	if(i==n)
	{
		return false;
	}
	if(a[i]==key)
	{
		return true;
	}
	return search(a,i+1,n,key);
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	if(search(a,0,n,key))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
	
}
