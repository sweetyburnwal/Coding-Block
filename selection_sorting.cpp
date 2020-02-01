#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,8,9,7,10};
	int n=sizeof(arr)/sizeof(int);
	int i,j;
	for(i=0;i<n-1;i++)
	{
	   int min_index=i;
	   for(j=i+1;j<n;j++)
	   {
	   	  if(arr[min_index]>arr[j])
			 {
			 	min_index=j;
			 } 
	   }
	   swap(arr[min_index],arr[i]);
	}
	cout<<"sorted list is: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
