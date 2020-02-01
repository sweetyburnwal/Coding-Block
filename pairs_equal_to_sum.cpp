#include<iostream>
using namespace std;

int printpairs(int arr[],int n,int sum)
{
	int count=0;
	
	   for(int i=0;i<n;i++)
	   {
	       for(int j=i+1;j<n;j++)
		   {
		     if(arr[i]+arr[j]==sum)
			 {
			 	if(arr[i]>arr[j])
	            {
	            	cout<<arr[j]<<" "<<endl;
				}
				else
				{
					cout<<arr[i]<<" "<<arr[j]<<endl;
				}
	         }
	       }
	   }
}
int main()
{
	int arr[]={1,5,7,-1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=6;
	printpairs(arr,n,sum);
	return 0;
}
