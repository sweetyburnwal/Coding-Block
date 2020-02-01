#include<iostream>
using namespace std;
int search(int *a,int i,int n,int key)
{
	//base case
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		return i;
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
	cout<<search(a,0,n,key);
}
