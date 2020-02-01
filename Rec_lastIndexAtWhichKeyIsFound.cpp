#include<iostream>
using namespace std;

int lastIndex(int *a,int i,int n,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		int pehlaWalaIndex=i;
		int aageKaIndex=lastIndex(a,i+1,n,key);
		if(aageKaIndex>pehlaWalaIndex)
		{
			return aageKaIndex;
		}
		else
		{
			return pehlaWalaIndex;
		}
	}
	return lastIndex(a,i+1,n,key);
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
	cout<<lastIndex(a,0,n,key);
	
	return 0;
	
}
