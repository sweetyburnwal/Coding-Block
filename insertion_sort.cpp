#include<iostream>
using namespace std;
int main()
{
	int arr[50];
	int n,i,j,key;
	cin>>n;
	cout<<"enter the array elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	cout<<"array after insertion sort: ";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
	}
