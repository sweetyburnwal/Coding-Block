#include<iostream>
using namespace std;
int main()
{
	int arr[50];
	int n,i,j;
	cin>>n;
	cout<<"enter the array elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		   if(arr[j]>arr[j+1])
		   {
		   	swap(arr[j],arr[j+1]);
		   }
	}
	cout<<"array after bubble sort: ";
	for(i=0;i<n;i++)
	cout<<" "<<arr[i];
	return 0;
}
