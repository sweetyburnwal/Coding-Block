#include<iostream>
using namespace std;

int binarysearch(int a[],int n)
{
	int s=0,e=n-1,mid,key;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(key<a[mid])
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
int main()
{
	int a[100];
	int key;
	cout<<"enter elements of array: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(binarysearch(a,n,key)==-1)
	{
		cout<<"element absent"<<endl;
	}
	else
	{
		cout<<"element present at"<<binarysearch(a,n,key)<<"th index"<<endl;
	}
	return 0;
}
