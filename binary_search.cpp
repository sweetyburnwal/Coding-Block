#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int m)
{
	if(r>=l)
	{
		int mid=l+(r-1)/2;

		if(a[mid]==m)
		{
			return mid;
		}
		if(a[mid]>m)
		{
			return binarySearch(a,l,mid-1,m);
		}
		return binarySearch(a,mid+1,r,m);
	}
	return -1;
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
	int m;
	cin>>m;
	int result=binarySearch(a,0,n-1,m);
	cout<<result;
	return 0;
}
